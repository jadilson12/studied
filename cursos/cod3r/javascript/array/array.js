// Declaração de um array tadicional
const pessoas = new Array('Pedro','Carlos', 'Ana', 'João' )
console.log(pessoas)

// Forma recomendada
pessoa = ['Ana', 'Jose', 'Maria', 'Carlos']
console.log(pessoa)

// Pegar o tamnho do array
console.log(pessoa.length)

pessoas.pop() // Remove o ultimo indice do array
console.log(pessoas)

pessoas.push('Joaquim') // Add  o  nome ultimo indice do array
console.log(pessoas)

pessoas.shift() // Remove o primeiro indice do array
console.log(pessoas)

pessoas.unshift('André') // Add  o  nome no primeiro indice do array
console.log(pessoas)

pessoas.splice(2, 0, 'Santo', 'Vava') // Add  os nome no meio  a parti do indice 2 do array
console.log(pessoas)

pessoas.splice(3, 1) // remove  um nome depois do indice 3 do array
console.log(pessoas)

const selecionaPessoas = pessoas.splice(1,3) //Pegando parte de um array
console.log(selecionaPessoas)


