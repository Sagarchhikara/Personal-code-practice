document.addEventListener('DOMContentLoaded', function () {
    // Generate table of contents
    generateTOC();

    // Set last edited date
    document.getElementById('last-edited').textContent = new Date().toLocaleDateString('en-US', {
        year: 'numeric',
        month: 'long',
        day: 'numeric'
    });

    // Toggle TOC visibility
    document.getElementById('toggle-toc').addEventListener('click', function () {
        const tocList = document.getElementById('toc-list');
        const button = document.getElementById('toggle-toc');

        if (tocList.style.display === 'none') {
            tocList.style.display = 'block';
            button.textContent = '[hide]';
        } else {
            tocList.style.display = 'none';
            button.textContent = '[show]';
        }
    });

    // Search functionality
    document.getElementById('search-button').addEventListener('click', performSearch);
    document.getElementById('search-input').addEventListener('keypress', function (e) {
        if (e.key === 'Enter') {
            performSearch();
        }
    });

    // Sample articles data (in a real app, this would come from an API)
    const articles = {
        'welcome to wikiclone': {
            title: 'Welcome to WikiClone',
            content: `
                <h1>Welcome to WikiClone</h1>
                <p><strong>WikiClone</strong> is a free online encyclopedia, created and edited by volunteers around the world. This is a demonstration clone of Wikipedia built with HTML, CSS, and JavaScript.</p>
                
                <h2>About WikiClone</h2>
                <p>This project demonstrates how to create a Wikipedia-like interface using front-end technologies.</p>
                
                <h2>Features</h2>
                <p>The WikiClone includes several key features that mimic Wikipedia's functionality.</p>
            `
        },
        'html': {
            title: 'HTML',
            content: `
                <h1>HTML</h1>
                <p><strong>HyperText Markup Language (HTML)</strong> is the standard markup language for documents designed to be displayed in a web browser.</p>
                
                <h2>History</h2>
                <p>HTML was created by Tim Berners-Lee in 1991. The first version was very simple with only 18 tags.</p>
                
                <h2>Structure</h2>
                <p>An HTML document has a specific structure including DOCTYPE, html, head and body elements.</p>
            `
        },
        'css': {
            title: 'CSS',
            content: `
                <h1>CSS</h1>
                <p><strong>Cascading Style Sheets (CSS)</strong> is a style sheet language used for describing the presentation of a document written in HTML.</p>
                
                <h2>History</h2>
                <p>CSS was first proposed by Håkon Wium Lie in 1994 while working at CERN with Tim Berners-Lee.</p>
                
                <h2>Features</h2>
                <p>CSS provides control over layout, colors, fonts, and other presentation aspects of web pages.</p>
            `
        },
        'javascript': {
            title: 'JavaScript',
            content: `
                <h1>JavaScript</h1>
                <p><strong>JavaScript</strong> is a programming language that conforms to the ECMAScript specification. It is high-level, often just-in-time compiled, and multi-paradigm.</p>
                
                <h2>History</h2>
                <p>JavaScript was created by Brendan Eich in 1995 while working at Netscape Communications.</p>
                
                <h2>Usage</h2>
                <p>JavaScript is primarily used to enhance web pages to provide for a more dynamic user experience.</p>
            `
        }
    };

    function performSearch() {
        const searchTerm = document.getElementById('search-input').value.toLowerCase();

        if (articles[searchTerm]) {
            displayArticle(articles[searchTerm]);
        } else {
            alert('Article not found. Try searching for "HTML", "CSS", or "JavaScript".');
        }
    }

    function displayArticle(article) {
        document.getElementById('article-title').textContent = article.title;
        document.getElementById('article-content').querySelector('.article-body').innerHTML = article.content;
        generateTOC();
    }

    function generateTOC() {
        const tocList = document.getElementById('toc-list');
        const headings = document.querySelectorAll('h2, h3');

        tocList.innerHTML = '';

        let currentH2 = null;

        headings.forEach((heading, index) => {
            // Add ID if not already present
            if (!heading.id) {
                heading.id = 'section-' + index;
            }

            if (heading.tagName === 'H2') {
                currentH2 = document.createElement('li');
                const link = document.createElement('a');
                link.href = '#' + heading.id;
                link.textContent = heading.textContent;
                currentH2.appendChild(link);
                tocList.appendChild(currentH2);

                // Create sublist for H3s
                const subList = document.createElement('ol');
                currentH2.appendChild(subList);
            } else if (heading.tagName === 'H3' && currentH2) {
                const subList = currentH2.querySelector('ol');
                if (subList) {
                    const item = document.createElement('li');
                    const link = document.createElement('a');
                    link.href = '#' + heading.id;
                    link.textContent = heading.textContent;
                    item.appendChild(link);
                    subList.appendChild(item);
                }
            }
        });
    }
});