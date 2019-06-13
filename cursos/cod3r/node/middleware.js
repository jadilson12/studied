 // middleware pattern ( chain of responsibiliy)
 const passo1 = (contexto, next) => {
     contexto.valor1 = 'mid1'
     next()
 } 

 const passo2 = (contexto, next) => {
     contexto.valor2 = 'mid2'
    next()
}

 const passo3 = contexto => contexto.valor3 = 'mid3'

 const exer = (contexto, ...middlewaares) => {
      const execPasso = indice => {
        middlewaares && indice < middlewaares.length &&
        middlewaares[indice](contexto, () => execPasso(indice + 1))
      }
      execPasso(0)
 }

 const contexto = {}
 exer(contexto, passo1, passo2, passo3)
 console.log(contexto)