const alunos = [
    { nome: 'Ze', nota: 8, bolsista: false},
    { nome: 'Aldo', nota: 7, bolsista: false},
    { nome: 'Ana', nota: 10, bolsista: false},
    { nome: 'Carlos', nota: 4.6, bolsista: true},
    { nome: 'Maria', nota: 6.1, bolsista: true},
]
console.log(alunos)
const resultado = alunos.map(a=> a.nota).reduce(function(acumulador, atual){
    console.log(acumulador, atual)
    return acumulador + atual 
},0)
console.log(resultado)