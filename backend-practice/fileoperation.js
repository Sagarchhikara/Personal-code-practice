const fs = require("fs");

// Creating a function to demonstrate file write operation
function writeFile() {
    fs.writeFile('data.txt', 'This is some data to write to the file', (err) => {
        if (err) {
            console.error('Error writing to file:', err);
        } else {
            console.log('File written successfully');
        }
    })
};
