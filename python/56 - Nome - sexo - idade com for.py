# Ano 2018
# exercício realizado durante o curso
# @jadilson12

a = 0
b = 0
c = 0
n = ''
for i in range(4):
    nome = str(input('Digite o nome :')).strip()
    idade = int(input('olá {} digite sua idade  '.format(nome)))
    sexo = str(input('Digite M para masculino e F para feminino  ')).upper().strip()
    a += idade
    if sexo == 'M' and idade > b:
            b = idade
            n = nome
    if sexo == 'F' and idade < 20:
        c += 1
print('\nA média de idade do grupo é: {}'.format(a/4))
print('O homem mais velho é: {}'.format(n))
print('{} mulheres tem menos de 20 anos'.format(c))
