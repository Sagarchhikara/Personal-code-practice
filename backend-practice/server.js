const http = require('http'); // http module is used to create an HTTP server in Node.js and manage relation between client and server

const myserver = http.createServer((req, res))=> { // createServer method creates a new HTTP server and takes a callback function with request and response objects as parameters