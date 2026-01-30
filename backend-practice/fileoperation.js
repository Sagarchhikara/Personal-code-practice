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

// Creating afunction to demonstrate file read operations Using ASync function 
function readFile() {
    fs.readFile('data.txt', 'utf8', (err, data) => {
        if (err) {
            console.error('Error reading file:', err);
        } else {
            console.log('File contents:', data);
        }
    });
}

// Call the functions to demonstrate file operations
writeFile();
readFile();

function appendFile() {
    fs.appendFile('data.txt', '\nThis is appended data', (err) => {
        if (err) {
            console.error('Error appending to file:', err);
        } else {
            console.log('Data appended successfully');
        }
    });
}

appendFile();
readFile();

