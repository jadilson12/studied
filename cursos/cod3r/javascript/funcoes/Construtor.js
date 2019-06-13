function Carro (velocidadeMaxima = 200, delta= 5){
    
    // Atributo privado
    let velocidadeAtual = 0
    
    //  Metodo publico 
    this.acelerar = function () {
        if(velocidadeAtual +  delta <= velocidadeMaxima){
            velocidadeAtual += delta
        } else {
            velocidadeAtual = velocidadeMaxima
        }
    }

    // Metodo publico
    this.obterVelocidade = function (){
        return velocidadeAtual
    }
}

const uno = new  Carro
uno.acelerar()  
uno.acelerar()  
console.log(uno.obterVelocidade()) 

const posh = new Carro(250, 20)
posh.acelerar()
posh.acelerar()
console.log(posh.obterVelocidade())

