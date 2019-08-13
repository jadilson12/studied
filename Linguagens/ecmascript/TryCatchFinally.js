const obj = {
    nome:"celular",
    preco: 21,
}


try{ // tenta
    // For verdadeiro
    console.log(obj.nome);
} catch(e) {
    // Se dar erro
    console.log('erro '+ e.target);
} finally {
    // Roda todas a vez
    console.log('Final');
}