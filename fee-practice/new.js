// Billing logic: multiple items added to cart. If cart value > 3000 => 10% discount, > 5000 => 15%.
const readline = require('readline');

const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
function question(q) { return new Promise(resolve => rl.question(q, resolve)); }

(async () => {
    const nStr = await question('Enter the number of items you want to add to the cart: ');
    const numberOfItems = parseInt(nStr, 10);
    if (isNaN(numberOfItems) || numberOfItems <= 0) {
        console.log('Invalid number of items. Exiting.');
        rl.close();
        return;
    }

    const cart = [];
    let totalAmount = 0;

    for (let i = 0; i < numberOfItems; i++) {
        const pStr = await question(`Enter the price of item ${i + 1}: `);
        const price = parseFloat(pStr);
        if (isNaN(price) || price < 0) {
            console.log('Invalid price entered; using 0 for this item.');
            cart.push(0);
            continue;
        }
        cart.push(price);
        totalAmount += price;
    }

    let discount = 0;
    if (totalAmount > 5000) discount = totalAmount * 0.15;
    else if (totalAmount > 3000) discount = totalAmount * 0.10;

    const finalAmount = totalAmount - discount;

    console.log(`Total Amount: Rs.${totalAmount.toFixed(2)}`);
    console.log(`Discount: Rs.${discount.toFixed(2)}`);
    console.log(`Final Amount to be paid: Rs.${finalAmount.toFixed(2)}`);

    rl.close();
})();

