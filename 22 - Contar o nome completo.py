# Ano 2018
# exercício realizado durante o curso
# @jadilson12

frase = input('Digite seu nome completo: ')
print('O nome  da {} tem [{}] letras'.format(frase, len(frase)))
print('Todas palavras Mauscula: {} '.format(frase.upper()))
print('Todas palavras minuscula: {}'.format(frase.lower()))
print('Todas letras sem espaço: {}'.format(len(frase) - frase.count(' ')))
nome = frase.split()
print('O primeiro nome  é {}'.format(nome[0]))
print('O Segundo  nome  é {}'.format(nome[1]))
print('Quantas letras tem o primeiro nome: {}'.format(len(nome[0])))