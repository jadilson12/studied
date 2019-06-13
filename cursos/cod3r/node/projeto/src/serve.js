const porta = 3304

const express = require('express')
const app = express()
const bodyParser = require('body-parser') // importante para que funciona o post API
const bancoDeDados = require('./bancoDeDados')

app.use(bodyParser.urlencoded({ extended:true})) // Middleware para todas request

// Isso posibilita criar uma acao antes  mostar de fato a lista principal
 app.get('/produtos', (request, response, next) => {
   console.log('middleware 1...')
    next()
})

// listar produtos
app.get('/produtos', (resuest, response, next) => {
    response.send(bancoDeDados.obterProdutos())
})

// listar produto
app.get('/produtos/:id', (request, response, next) => {
    response.send(bancoDeDados.obterProduto(request.params.id))
})

// Salvar produto
app.post('/produtos', (request, response, next) => {
   const produto = bancoDeDados.salvarProdutos({
       nome: request.body.nome,
       preco: request.body.preco
   })
   response.send(produto) // Json
})

// Atualizar produto
app.put('/produtos/:id', (request, response, next) => {
    const produto = bancoDeDados.salvarProdutos({
        id: request.params.id,
        nome: request.body.nome,
        preco: request.body.preco
    })
    response.send(produto) // Json
})

// delete produto
app.delete('/produtos/:id', (request, response, next) => {
    const produto = bancoDeDados.excluirProduto(request.params.id)
    response.send(produto) 
})

app.listen(porta, () => {
    console.log(`Servidor exercutando na porta ${porta}`)
})