# Ano 2018
# exercício realizado durante o curso
# @jadilson12

n1 = int(input('Digite 1º valor: '))
n2 = int(input('Digite 2º valor: '))
n3 = int(input('Digite 3º valor: '))
maior = n1 # Testando valores maiores
if n2 > n1 and n2 > n3:
    maior = n2
if n3 > n1 and n3 > n2:
    maior = n3

menor = n1 # Testando valores memores
if n2 < n1 and n2 < n3:
    menor = n2
if n3 < n1 and n3 < n2:
    menor = n3
print('O maior valor foi {}'.format(maior))
print('O menor valor foi {}'.format(menor))