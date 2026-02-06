const http = require('http'); // http module is used to create an HTTP server in Node.js and manage relation between client and server
const fs = require('fs'); // fs module is used for file system operations

const myserver = http.createServer((req, res) => { // createServer method creates a new HTTP server and takes a callback function with request and response bjects as parameters
    fs.appendFile('log.txt', 'aaaaaa', (err) => { // appendFile method is used to append data to a file, in this case 'log.txt', and takes a callback function with an error parameter
        if (err) {
            console.log(err); // log any errors that occur during the file append operation
        }
        else {
            console.log('Data appended to file successfully'); // log message to indicate that data was appended to the file successfully
        }
    });
    res.write('Hello World from the server!'); // write method sends a response body to the client
    res.end('Server is Running'); // end method sends the response back to the client and signals that all of the response headers and body have been sent
});

myserver.listen(3000, () => { // listen method binds the server to a specific port and hostname, and starts listening for incoming connections
    console.log('Server is listening on port 3000'); // log message to indicate that the server is running and listening on port 3000
});
