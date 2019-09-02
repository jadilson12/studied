let pessoas = [
    { nome: "maria", idade: 6 },
    { nome: "Pedro", idade: 43 },
    { nome: "Ana", idade: 23 },
    { nome: "Carlos", idade: 67 },
]

// Lista nome de uma array de objetos
pessoas.forEach(e => {
    // console.log(e.nome);
});

// Adicionar um objeto no array
const pessoa = { nome: "José", idade: 89 }
const adicionar = pessoas.push(pessoa)
const removeUltimo = pessoas.pop()
const removerPrimeiro = pessoas.shift()
const adicionarPrimeiro = pessoas.unshift(pessoa)

// enconta um determinado valor encontrado no objeto
const contarPessoa = pessoas.find(e => e.nome == 'Ana')

// Filtra todos objetos encontrados com idade maior que 30 anos
const pessoaMaiorQue43 = pessoas.filter(e=> e.idade > 30)


console.log(removeUltimo)
console.log(pessoas)