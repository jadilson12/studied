const produtos = [
    {nome: 'Notebook', preco: 2333, fragil: true},
    {nome: 'Celular', preco: 2555, fragil: true},
    {nome: 'PC', preco: 2000, fragil: true},
    {nome: 'Relogio', preco: 1000, fragil: false}
]

console.log(produtos.filter(function(p) {   
    return !p.fragil
})) 

const Caro = produtos => produtos.preco > 1000
const Fragil = produtos => produtos.fragil
console.log(produtos.filter(Caro).filter(Fragil))