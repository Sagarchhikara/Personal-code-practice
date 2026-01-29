const fs = require('fs');// require is used to import modules in Node.js
// fs module provides an API for interacting with the file system in a manner closely modeled around standard POSIX functions.
fs.writeFileSync('example.txt', 'Hello, World!');
// writeFileSync is a method that writes data to a file synchronously. If the file does not exist, it will be created.

// Asynchronous version of writeFileSync
// in writeFile, the third argument is a callback function that is called when the write operation is complete. is is used to handle any errors that may occur during the write operation.
fs.writeFile("text.txt", "This is an example of writeFile method", (err) => {
    if (err) console.log(err);
    else console.log("File written successfully using writeFile method");
    const data = fs.readFileSync('example.txt', 'utf8');
});
// readFileSync is a method that reads the contents of a file synchronously. The second argument specifies the encoding.
var data = fs.readFileSync('text.txt', 'utf8');
console.log(data); // Output: Hello, World!

data = fs.readFile('text.txt', 'utf8', (err, data) => {
    if (err) console.log(err);
    else console.log(data); // Output: This is an example of writeFile method
});
console.log(data); // Output: This is an example of writeFile method

fs.appendFileSync('example.txt', '\nAppended Text!'); // appendFileSync is a method that appends data to a file synchronously. If the file does not exist, it will be created.