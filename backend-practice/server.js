const http = require('http'); // http module is used to create an HTTP server in Node.js and manage relation between client and server

const myserver = http.createServer((req, res) => { // createServer method creates a new HTTP server and takes a callback function with request and response bjects as parameters
    res.write('Hello World from the server!'); // write method sends a response body to the client
    res.end('Server is Running'); // end method sends the response back to the client and signals that all of the response headers and body have been sent
});

myserver.listen(3000, () => { // listen method binds the server to a specific port and hostname, and starts listening for incoming connections
    console.log('Server is listening on port 3000'); // log message to indicate that the server is running and listening on port 3000
});