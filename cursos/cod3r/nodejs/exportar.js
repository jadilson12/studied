console.log(module.exports)
console.log(module.exports == this)
console.log(module.exports == exports)

this.a = 23
exports.b = 34
module.exports.c = 3

exports = null // isso nao funciona 
console.log(module.exports)

module.exports = {
    publico: true
}
console.log(module.exports)



