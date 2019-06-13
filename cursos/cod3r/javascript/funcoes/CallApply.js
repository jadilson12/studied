// Call Chama a função usando paramentos simples 
// Apply Chama a função passando os paramentos dentro de array

function obterPreco (imposto = 0, moeda = 'R$'){
    return `${moeda} ${this.preco  * ( 1 - this.desc) *   (1 + imposto)}` 
} 

const produto = {
    nome: 'Computador',
    preco: 2323,
    desc: 0.14,
    obterPreco 
}
global.preco = 20
global.desc = 0.1
console.log(obterPreco())
console.log(produto.obterPreco())

const carro = {
    preco: 23233,
    desc: 0.2
}
// chamando função  call passado objeto carro para obterPreco
console.log(obterPreco.call(carro))

// chamando função  apply passado objeto carro para obterPreco
console.log(obterPreco.apply(carro))

// Pasando paramentos usando a função call
console.log(obterPreco.call(carro, 0.2, '$'))

// Pasando paramentos usando a função apply
console.log(obterPreco.apply(carro, [0.2,'$'])) 