const numero = [1, 2, 3, 4]

// for com proposito 
let resultado = numero.map(function(e){
    return e * 2
})
console.log(resultado) // 2, 4 , 6, 8

const soma10 = e => e + 10
const tripo = e => e * 3
const paraDinheiro = e => `R$ ${parseFloat(e).toFixed(2).replace('.', ',')}`

resultado = numero.map(soma10).map(tripo).map(paraDinheiro)
console.log(resultado)