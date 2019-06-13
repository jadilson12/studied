const escola = [{
    nome: 'Turma da manha',
    alunos: [{
        nome: 'carlos',
        nota: 4.9
    }, {
        nome: 'Aldo',
        nota: 3.7
    }]
},{
    nome: 'Turma da tarde',
    alunos: [{
        nome: 'Ana',
        nota: 7.9
    }, {
        nome: 'Paula',
        nota: 8.9
    }]
}]

const obterNotaDoAluno = aluno => aluno.nota
const obterNotasDaTurma = turma => turma.alunos.map(obterNotaDoAluno)

const nota1 = escola.map(obterNotasDaTurma)
console.log(nota1)

Array.prototype.flatMap = function(callback) {
    return Array.prototype.concat.apply([], this.map(callback))
}

const nota2 = escola.flatMap(obterNotasDaTurma)
console.log(nota2)