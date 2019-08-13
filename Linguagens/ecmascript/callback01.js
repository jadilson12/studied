const  pessoas = ['maria', 'Jose', 'ana']

const callback = (nome, index) => console.log(index+1 + '.' + nome);

pessoas.forEach(callback)

pessoas.forEach((nome,i) => console.log(i+ ')' + nome))