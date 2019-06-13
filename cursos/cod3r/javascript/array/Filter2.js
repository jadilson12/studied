Array.prototype.filter2 = function (callback){
    const newArray = []
    for(let i = 0; i < this.length; i++){
        if(callback(this[i], i, this)){
            newArray.push(this[i])
        }
    }
    return newArray
}

const produtos = [
    { nome: 'Notebook', preco: 2333, fragil: true },
    { nome: 'Celular', preco: 2555, fragil: true },
    { nome: 'PC', preco: 2000, fragil: true },
    { nome: 'Relogio', preco: 1000, fragil: false }
]

console.log(produtos.filter2(function (p) {
    return !p.fragil
}))

const Caro = produtos => produtos.preco > 1000
const Fragil = produtos => produtos.fragil
console.log(produtos.filter2(Caro).filter2(Fragil))