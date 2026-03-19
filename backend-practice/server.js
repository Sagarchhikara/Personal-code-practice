const http = require('http'); // http module is used to create an HTTP server in Node.js and manage relation between client and server
const fs = require('fs'); // fs module is used for file system operations

const myserver = http.createServer((req, res) => {
    const log = `path ls: ${req.url}\n`;
    fs.appendFile('log.txt', log, (err) => {
        if (err) {
            res.statusCode = 500;
            res.end('Server Error');
            return;
        }

        switch (req.url) {
            case '/':
                res.write('This is the home page');
                res.end();
                break;
            case '/about':
                res.write('This is the about page');
                res.end();
                break;
            case '/contact':
                res.write('This is the contact page');
                res.end();
                break;
            default:
                res.statusCode = 404;
                res.end('Page Not Found');
                break;
        }
    });
});

myserver.listen(3000, () => { // listen method binds the server to a specific port and hostname, and starts listening for incoming connections
    console.log('Server is listening on port 3000'); // log message to indicate that the server is running and listening on port 3000
});
