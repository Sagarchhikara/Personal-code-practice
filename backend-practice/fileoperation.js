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
// Samy way functions can be created for other file operations like delete, rename, etc.

// create functions to make  file of students that contains name, age, grade then append it add phone number and the cpy it 

function createStudentFile() {
    fs.writeFile('students.txt', 'Name: John Doe, Age: 20, Grade: A', (err) => {
        if (err) {
            console.error('Error creating student file:', err);
        } else {
            console.log('Student file created successfully');
        }
    });
}

function appendPhoneNumber() {
    fs.appendFile('students.txt', ', Phone: 123-456-7890', (err) => {
        if (err) {
            console.error('Error appending phone number:', err);
        } else {
            console.log('Phone number appended successfully');
        }
    });
}

function copyStudentFile() {
    fs.copyFile('students.txt', 'students_copy.txt', (err) => {
        if (err) {
            console.error('Error copying student file:', err);
        } else {
            console.log('Student file copied successfully');
        }
    });
}

createStudentFile();
appendPhoneNumber();
copyStudentFile();