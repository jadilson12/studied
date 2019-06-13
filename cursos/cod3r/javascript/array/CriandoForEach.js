// funcion que realiza o forEach
Array.prototype.forEach2 = function(callback){
    for (let i = 0; i < this.length; i++) {
        callback(this[i], i, this)        
    }
}

// Array de pessoas
const aprovados = ['Ana', 'Aldo', 'Jose', 'Pedro']

// Chama a nova função ForEach para exibir o resultado
aprovados.forEach2(function(nome, indice){
    console.log(`${indice + 1}) ${nome}`)
})