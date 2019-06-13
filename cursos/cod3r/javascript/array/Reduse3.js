Array.prototype.reduce2 = function (callback, valorInicial) {
    const indiceInicial = valorInicial ? 0 : 1 
    let  acumulador = valorInicial || this[0]
    for(let i = indiceInicial; i < this.length; i++){
         acumulador = callback(acumulador, this[i], i, this)
    }
    return acumulador
}

const soma = (total, valor) => valor + total
const valores = [1, 2, 3, 4, 5]
console.log(valores.reduce2(soma, 15))

