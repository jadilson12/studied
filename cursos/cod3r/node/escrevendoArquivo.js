const fs = require('fs')

const produto = {
    nome: 'Celular',
    preso: 21223.89 ,
    desconto: 0.10

}

fs.writeFile(__dirname + '/ArquivoGerado.json', JSON.stringify(produto), err => {
     console.log(err || 'arquivo salvo')
})