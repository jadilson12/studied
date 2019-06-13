function criarProdutos (nome, preco) {
    return {
        nome,
        preco,
        desconto: 1.5
    }
}
console.log(criarProdutos('Notebook',5))
