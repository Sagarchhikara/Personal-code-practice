const fs=require("fs");

fs.writeFile('data.txt', 'This is some data to write to the file', (err) => {
    if (err) {
        console.error('Error writing to file:', err);
    } else {
        console.log('File written successfully');
    }
});
