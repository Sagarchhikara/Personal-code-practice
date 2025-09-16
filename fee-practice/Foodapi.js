class RecipeFinder {
    constructor() {
        // Edamam API credentials (You need to replace these with your actual API credentials)
        this.APP_ID = 'fa1d0a6e';
        this.APP_KEY = '615f6e39d4f2d9fe4e4530a9c7a78991';
        this.BASE_URL = 'https://api.edamam.com/search';

        // Application state
        this.currentQuery = '';
        this.currentFilters = {};
        this.recipes = [];
        this.currentView = 'grid';
        this.isLoading = false;
        this.nextPageUrl = null;

        this.initializeApp();
    }

    initializeApp() {
        this.bindEvents();
        this.showApiKeyMessage();
    }

    showApiKeyMessage() {
        // Show message about API keys
        const container = document.getElementById('recipesContainer');
        container.innerHTML = `
            <div class="welcome-message">
                <i class="fas fa-key"></i>
                <h3>API Configuration Required</h3>
                <p>To use this Recipe Finder, you need to:</p>
                <ol style="text-align: left; max-width: 600px; margin: 1rem auto;">
                    <li>Sign up for a free account at <a href="https://developer.edamam.com/" target="_blank" style="color: #fff; text-decoration: underline;">Edamam Developer Portal</a></li>
                    <li>Get your Application ID and Application Key from the Recipe Search API</li>
                    <li>Replace 'your_app_id_here' and 'your_app_key_here' in the script.js file</li>
                </ol>
                <p style="margin-top: 1rem; font-size: 0.9rem; opacity: 0.8;">Once configured, you'll be able to search through millions of recipes!</p>
            </div>
        `;
    }

    bindEvents() {
        // Search functionality
        const searchBtn = document.getElementById('searchBtn');
        const searchInput = document.getElementById('searchInput');

        searchBtn.addEventListener('click', () => this.handleSearch());
        searchInput.addEventListener('keypress', (e) => {
            if (e.key === 'Enter') this.handleSearch();
        });

        // Filter changes
        document.getElementById('dietFilter').addEventListener('change', () => this.handleSearch());
        document.getElementById('healthFilter').addEventListener('change', () => this.handleSearch());
        document.getElementById('cuisineFilter').addEventListener('change', () => this.handleSearch());

        // View toggle
        document.querySelectorAll('.view-btn').forEach(btn => {
            btn.addEventListener('click', (e) => this.toggleView(e.target.dataset.view));
        });

        // Load more button
        document.getElementById('loadMoreBtn').addEventListener('click', () => this.loadMoreRecipes());

        // Modal functionality
        this.setupModal();
    }

    setupModal() {
        const modal = document.getElementById('recipeModal');
        const closeBtn = document.querySelector('.close');

        closeBtn.addEventListener('click', () => {
            modal.style.display = 'none';
        });

        window.addEventListener('click', (e) => {
            if (e.target === modal) {
                modal.style.display = 'none';
            }
        });
    }

    async handleSearch() {
        if (this.isLoading) return;

        const query = document.getElementById('searchInput').value.trim();
        if (!query) {
            this.showError('Please enter a search term');
            return;
        }

        // Check if API keys are configured
        if (this.APP_ID === 'your_app_id_here' || this.APP_KEY === 'your_app_key_here') {
            this.showApiKeyMessage();
            return;
        }

        this.currentQuery = query;
        this.currentFilters = this.getFilters();
        this.recipes = [];
        this.nextPageUrl = null;

        await this.searchRecipes();
    }

    getFilters() {
        return {
            diet: document.getElementById('dietFilter').value,
            health: document.getElementById('healthFilter').value,
            cuisineType: document.getElementById('cuisineFilter').value
        };
    }

    async searchRecipes(loadMore = false) {
        this.setLoading(true);

        try {
            let url;

            if (loadMore && this.nextPageUrl) {
                url = this.nextPageUrl;
            } else {
                url = this.buildSearchUrl();
            }

            const response = await fetch(url);

            if (!response.ok) {
                throw new Error(`HTTP error! status: ${response.status}`);
            }

            const data = await response.json();

            if (loadMore) {
                this.recipes = [...this.recipes, ...data.hits];
            } else {
                this.recipes = data.hits;
            }

            this.nextPageUrl = data._links && data._links.next ? data._links.next.href : null;

            this.displayResults();
            this.updateResultsHeader();
            this.updateLoadMoreButton();

        } catch (error) {
            console.error('Error fetching recipes:', error);
            this.showError('Failed to fetch recipes. Please check your API credentials and try again.');
        } finally {
            this.setLoading(false);
        }
    }

    buildSearchUrl() {
        const params = new URLSearchParams({
            app_id: this.APP_ID,
            app_key: this.APP_KEY,
            q: this.currentQuery,
            from: 0,
            to: 20
        });

        // Add filters
        Object.entries(this.currentFilters).forEach(([key, value]) => {
            if (value) {
                params.append(key, value);
            }
        });

        return `${this.BASE_URL}?${params.toString()}`;
    }

    displayResults() {
        const container = document.getElementById('recipesContainer');

        if (this.recipes.length === 0) {
            container.innerHTML = `
                <div class="no-results">
                    <i class="fas fa-search-minus"></i>
                    <h3>No Recipes Found</h3>
                    <p>Try adjusting your search terms or filters</p>
                </div>
            `;
            return;
        }

        container.innerHTML = this.recipes.map(hit => this.createRecipeCard(hit.recipe)).join('');

        // Add click events to recipe cards
        container.querySelectorAll('.recipe-card').forEach((card, index) => {
            card.addEventListener('click', () => this.openRecipeModal(this.recipes[index].recipe));
        });
    }

    createRecipeCard(recipe) {
        const calories = Math.round(recipe.calories);
        const time = recipe.totalTime || 'N/A';
        const servings = recipe.yield || 'N/A';

        // Get first few diet and health labels
        const dietLabels = recipe.dietLabels.slice(0, 2);
        const healthLabels = recipe.healthLabels.slice(0, 3);

        return `
            <div class="recipe-card" data-recipe='${JSON.stringify(recipe)}'>
                <div class="recipe-image" style="background-image: url('${recipe.image}');">
                    <div class="recipe-badge">${recipe.source}</div>
                </div>
                <div class="recipe-content">
                    <h3 class="recipe-title">${recipe.label}</h3>
                    <p class="recipe-source">by ${recipe.source}</p>
                    <div class="recipe-stats">
                        <span><i class="fas fa-clock"></i> ${time === 0 || time === 'N/A' ? 'Quick' : time + ' min'}</span>
                        <span><i class="fas fa-users"></i> ${servings} servings</span>
                        <span><i class="fas fa-fire"></i> ${calories} cal</span>
                    </div>
                    <div class="recipe-labels">
                        ${dietLabels.map(label => `<span class="label diet">${label}</span>`).join('')}
                        ${healthLabels.map(label => `<span class="label health">${label}</span>`).join('')}
                    </div>
                </div>
            </div>
        `;
    }

    openRecipeModal(recipe) {
        const modal = document.getElementById('recipeModal');

        // Populate modal content
        document.getElementById('modalRecipeTitle').textContent = recipe.label;
        document.getElementById('modalRecipeImage').src = recipe.image;
        document.getElementById('modalRecipeImage').alt = recipe.label;

        // Recipe stats
        const time = recipe.totalTime || 'N/A';
        const servings = recipe.yield || 'N/A';
        const calories = Math.round(recipe.calories);

        document.getElementById('modalRecipeTime').textContent =
            time === 0 || time === 'N/A' ? 'Quick Recipe' : time + ' minutes';
        document.getElementById('modalRecipeServings').textContent = servings + ' servings';
        document.getElementById('modalRecipeCalories').textContent = calories + ' calories';

        // Ingredients
        const ingredientsList = document.getElementById('modalRecipeIngredients');
        ingredientsList.innerHTML = recipe.ingredientLines
            .map(ingredient => `<li>${ingredient}</li>`)
            .join('');

        // Diet labels
        const dietLabelsContainer = document.getElementById('modalRecipeLabels');
        dietLabelsContainer.innerHTML = recipe.dietLabels
            .map(label => `<span class="label diet">${label}</span>`)
            .join('');

        // Health labels
        const healthLabelsContainer = document.getElementById('modalRecipeHealth');
        healthLabelsContainer.innerHTML = recipe.healthLabels
            .slice(0, 10) // Limit to first 10 to avoid clutter
            .map(label => `<span class="label health">${label}</span>`)
            .join('');

        // Source link
        document.getElementById('modalRecipeSource').href = recipe.url;

        modal.style.display = 'block';
    }

    updateResultsHeader() {
        const header = document.getElementById('resultsHeader');
        const count = document.getElementById('resultsCount');

        if (this.recipes.length > 0) {
            header.style.display = 'flex';
            count.textContent = `Found ${this.recipes.length} recipes for "${this.currentQuery}"`;
        } else {
            header.style.display = 'none';
        }
    }

    updateLoadMoreButton() {
        const container = document.querySelector('.load-more-container');
        const btn = document.getElementById('loadMoreBtn');

        if (this.nextPageUrl && this.recipes.length > 0) {
            container.style.display = 'block';
            btn.disabled = false;
        } else {
            container.style.display = 'none';
        }
    }

    async loadMoreRecipes() {
        if (!this.nextPageUrl || this.isLoading) return;

        const btn = document.getElementById('loadMoreBtn');
        const btnText = btn.querySelector('span');
        const btnSpinner = btn.querySelector('i');

        btn.disabled = true;
        btnText.style.display = 'none';
        btnSpinner.style.display = 'inline';

        await this.searchRecipes(true);

        btnText.style.display = 'inline';
        btnSpinner.style.display = 'none';
        btn.disabled = false;
    }

    toggleView(view) {
        this.currentView = view;

        // Update active button
        document.querySelectorAll('.view-btn').forEach(btn => {
            btn.classList.remove('active');
        });
        document.querySelector(`[data-view="${view}"]`).classList.add('active');

        // Update container class
        const container = document.getElementById('recipesContainer');
        if (view === 'list') {
            container.classList.add('list-view');
        } else {
            container.classList.remove('list-view');
        }
    }

    setLoading(loading) {
        this.isLoading = loading;
        const btn = document.getElementById('searchBtn');
        const btnText = btn.querySelector('.btn-text');
        const btnSpinner = btn.querySelector('.loading-icon');

        if (loading) {
            btn.disabled = true;
            btnText.style.display = 'none';
            btnSpinner.style.display = 'inline';
        } else {
            btn.disabled = false;
            btnText.style.display = 'inline';
            btnSpinner.style.display = 'none';
        }
    }

    showError(message) {
        const container = document.getElementById('recipesContainer');
        container.innerHTML = `
            <div class="no-results">
                <i class="fas fa-exclamation-triangle"></i>
                <h3>Error</h3>
                <p>${message}</p>
            </div>
        `;
    }
}

// Utility functions for demo data (when API is not configured)
class RecipeDemo {
    constructor() {
        this.demoRecipes = [
            {
                recipe: {
                    label: "Chicken Teriyaki",
                    image: "https://images.unsplash.com/photo-1546833999-b9f581a1996d?w=400",
                    source: "Food Network",
                    url: "https://example.com",
                    yield: 4,
                    calories: 450,
                    totalTime: 30,
                    dietLabels: ["High-Protein"],
                    healthLabels: ["Gluten-Free", "Dairy-Free"],
                    ingredientLines: [
                        "1 lb chicken breast, sliced",
                        "1/4 cup soy sauce",
                        "2 tbsp honey",
                        "1 tbsp rice vinegar",
                        "2 cloves garlic, minced"
                    ]
                }
            },
            {
                recipe: {
                    label: "Mediterranean Pasta Salad",
                    image: "https://images.unsplash.com/photo-1551892374-ecf8754cf8b0?w=400",
                    source: "Cooking Light",
                    url: "https://example.com",
                    yield: 6,
                    calories: 320,
                    totalTime: 20,
                    dietLabels: ["Balanced"],
                    healthLabels: ["Vegetarian", "Mediterranean"],
                    ingredientLines: [
                        "12 oz pasta",
                        "1 cup cherry tomatoes",
                        "1/2 cup olives",
                        "1/4 cup feta cheese",
                        "2 tbsp olive oil"
                    ]
                }
            },
            {
                recipe: {
                    label: "Avocado Toast Supreme",
                    image: "https://images.unsplash.com/photo-1603133872878-684f208fb84b?w=400",
                    source: "Healthy Eats",
                    url: "https://example.com",
                    yield: 2,
                    calories: 280,
                    totalTime: 10,
                    dietLabels: ["Low-Carb"],
                    healthLabels: ["Vegetarian", "Vegan", "Dairy-Free"],
                    ingredientLines: [
                        "2 slices whole grain bread",
                        "1 ripe avocado",
                        "1 tomato, sliced",
                        "Salt and pepper to taste",
                        "Hemp seeds for garnish"
                    ]
                }
            }
        ];
    }

    getDemoResults(query) {
        return {
            hits: this.demoRecipes,
            _links: null
        };
    }
}

// Initialize the application
document.addEventListener('DOMContentLoaded', () => {
    const app = new RecipeFinder();

    // Add demo functionality for testing without API
    window.loadDemoRecipes = function () {
        const demo = new RecipeDemo();
        const demoData = demo.getDemoResults('demo');

        app.recipes = demoData.hits;
        app.currentQuery = 'Demo Recipes';
        app.nextPageUrl = null;

        app.displayResults();
        app.updateResultsHeader();
        app.updateLoadMoreButton();
    };

    // Add demo button for testing
    const searchSection = document.querySelector('.search-section .search-container');
    const demoButton = document.createElement('button');
    demoButton.textContent = 'Load Demo Recipes';
    demoButton.className = 'search-btn';
    demoButton.style.marginTop = '1rem';
    demoButton.style.width = '100%';
    demoButton.onclick = window.loadDemoRecipes;

    // Only show demo button if API is not configured
    if (app.APP_ID === 'your_app_id_here') {
        searchSection.appendChild(demoButton);
    }
});