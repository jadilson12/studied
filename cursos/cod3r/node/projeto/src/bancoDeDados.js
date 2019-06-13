const sequence = {
    _id: 1,
    get id() {
        return this._id++
    }
}
const produtos = {}

function salvarProdutos(produto) {
    if (!produto.id) 
        produto.id = sequence.id
    produtos[produto.id] = produto
    return produto 
}

function obterProduto(id) {
    return produtos[id] || {}
}

function obterProdutos() {
    return Object.values(produtos)
}

function excluirProduto(id) {
    const produto = produtos[id]
    delete produtos[id]
    return produto
}

// cria o module para ser usado em outro lugar 
module.exports = {salvarProdutos, obterProduto, obterProdutos, excluirProduto}