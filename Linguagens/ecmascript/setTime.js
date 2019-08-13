// Contagem com intervalo de 1 segundo
const temporizadorContador = (intervalo) => {
    let n= 0
    setInterval(()=>{
        console.log(n + ') Contando ')
        n++
    }, intervalo)
}

// intervalo em segundo
temporizadorContador(1000)

// Temporizador determinado
const temporizadorOut = (tempo) => {
    setTimeout(() => {
        console.log('Exercutei');
    }, tempo)
}
// intervalo em segundo
temporizadorOut(3000)

