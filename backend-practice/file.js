const fs = require('fs');// require is used to import modules in Node.js
// fs module provides an API for interacting with the file system in a manner closely modeled around standard POSIX functions.
fs.writeFileSync('example.txt', 'Hello, World!');
// writeFileSync is a method that writes data to a file synchronously. If the file does not exist, it will be created.

fs.writeFile("text.txt", "This is an example of writeFile method", (err) => {
    const data = fs.readFileSync('example.txt', 'utf8');
    // readFileSync is a method that reads the contents of a file synchronously. The second argument specifies the encoding.

    console.log(data); // Output: Hello, World!
