const http = require('http'); // http module is used to create an HTTP server in Node.js and manage relation between client and server
const fs = require('fs'); // fs module is used for file system operations

const myserver = http.createServer((req, res) => { // createServer method creates a new HTTP server and takes a callback function with request and response bjects as parameters
    const log = `path ls: ${req.url}\n`
    fs.appendFile('log.txt', log, (err) => { // appendFile method is used to append data to a file, in this case 'log.txt', and takes a callback function with an error parameter
        if (err) {
            res.statusCode = 500;
            res.end("Server Error");
            return;// log any errors that occur during the file append operation
        }
        else {
            switch (req.url) { // switch statement is used to handle different routes based on the request URL
                case '/':
                    res.end("This is the home page");
                    break;
                case '/about':
                    res.end("This is the about page");
                    break;
                case '/contact':
                    res.end("This is the contact page");
                    break;
                default:
                    res.statusCode = 404;
                    res.end("Page Not Found");
            }
        }
    });
    res.write('Hello World from the server!'); // write method sends a response body to the client
    res.end('Server is Running'); // end method sends the response back to the client and signals that all of the response headers and body have been sent
});

myserver.listen(3000, () => { // listen method binds the server to a specific port and hostname, and starts listening for incoming connections
    console.log('Server is listening on port 3000'); // log message to indicate that the server is running and listening on port 3000
});
