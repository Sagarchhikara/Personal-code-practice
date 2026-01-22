// we have ,ultiple items beign added n crt if cart value if more than 3000rs it discount will be 10% and if more that 5000 discount will be 15% implemnt the billing logic 

console.log("Enter the Number of items you want to add to the cart:");



let cart = [];
let totalAmount = 0;

for (let i = 0; i < numberOfItems; i++) {
    console.log(`Enter the price of item ${i + 1}:`);
    let price = parseFloat(prompt());
    cart.push(price);
    totalAmount += price;
}

let discount = 0;

if (totalAmount > 5000) {
    discount = totalAmount * 0.15;
} else if (totalAmount > 3000) {
    discount = totalAmount * 0.10;
}

let finalAmount = totalAmount - discount;

console.log(`Total Amount: Rs.${totalAmount.toFixed(2)}`);
console.log(`Discount: Rs.${discount.toFixed(2)}`);
console.log(`Final Amount to be paid: Rs.${finalAmount.toFixed(2)}`);

