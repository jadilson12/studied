const aprovados = ['Daniel', 'Ana', 'Carlos', 'Alda'] // Array

aprovados.forEach(function(nome, indice){
    console.log(`${indice + 1 }) ${nome}`)
})
// Exibe todo array aprovados apenas os nomes 
aprovados.forEach(nome=> console.log(nome))

const exibirAprovados = aprovado => console.log(aprovado)
aprovados.forEach(exibirAprovados)