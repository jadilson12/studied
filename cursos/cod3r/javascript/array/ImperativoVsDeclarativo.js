const alunos = [
    { aluno: 'maria', nota: 7.8},
    { aluno: 'Ana', nota: 9.1}
]

// Imperativo
let total1 = 0
for (let i = 0; i < alunos.length; i++) {
    total1 += alunos[i].nota
}
console.log(total1 / alunos.length)

// Declarativo
const obterNota = aluno =>  aluno.nota
const soma = (total, nota) => total + nota
const total2 = alunos.map(obterNota).reduce(soma)
console.log(total2 / alunos.length)