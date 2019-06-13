const anomimo = process.argv.indexOf('-a') !== -1
//console.log(anomimo)

if (anomimo) {
    process.stdout.write('Fala Anômio!\n')
    process.exit()
} else {
    process.stdout.write('Informe seu nome: ')
    process.stdin.on('data', data => { // Evento acorre quando o usuario click no enter
        
        const nome = data.toString().replace('\n', '')
        process.stdout.write(`Fala ${nome}!!\n`)
        process.exit()
    })
}