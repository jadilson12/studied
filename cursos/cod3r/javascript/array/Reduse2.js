const alunos = [
    { nome: 'Ze', nota: 8, bolsista: false },
    { nome: 'Aldo', nota: 7, bolsista: false },
    { nome: 'Ana', nota: 10, bolsista: false },
    { nome: 'Carlos', nota: 4.6, bolsista: true },
    { nome: 'Maria', nota: 6.1, bolsista: true },
]

// Desafio: Todos os alunos são bolsista?
const alunosBolsista = (resultado, bolsista) => resultado && bolsista
console.log(alunos.map(a => a.bolsista).reduce(alunosBolsista))

// Desafio: algun aluno é bolsista?
const algumBolsista = (resultado, bolsista) => resultado  || bolsista 
console.log(alunos.map(a => a.bolsista).reduce(algumBolsista))