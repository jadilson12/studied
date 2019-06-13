
// Usando class
class Pessoa {

    constructor (nome) {
        this.nome = nome
    }
    fala() {
        console.log(`Meu nome é  ${this.nome}`)
    }
}

const p1 = new Pessoa('maria')
p1.fala()

// usando Factory
const criandoPessoa = nome => {
    return {
            fala: () => console.log(`Meu nome é  ${nome}`)
    }
}

const p2 = criandoPessoa('Carlos')
p2.fala()
