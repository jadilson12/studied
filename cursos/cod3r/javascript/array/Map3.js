Array.prototype.map2 = function (callback) {
    const newArray = []
    for(let i=0; i < this.length; i++){
        newArray.push(callback(this[i], i, this))
    }
    return newArray
}
const carrinho = [
    '{"nome": "Borracha", "preco": 3.45}',
    '{"nome": "Lapis", "preco": 1.00}',
    '{"nome": "Caderno", "preco": 6.45}',
    '{"nome": "Livro", "preco": 5.45}',
    '{"nome": "Tinta", "preco": 3.05}',
]
// retornar um array  apenas com os preço do json

const paraObjeto = json => JSON.parse(json)  // convet objeto
const apenasPreco = produto => produto.preco  // obtem apenas o preco

const resultado = carrinho.map2(paraObjeto).map2(apenasPreco)
console.log(resultado)