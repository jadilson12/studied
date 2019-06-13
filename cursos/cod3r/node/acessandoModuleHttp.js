const http = require('http')
http.createServer((request, response) => {
    response.write('Bom dia Programador!!!')
    response.end()
}).listen(8080)