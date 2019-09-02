# Ano 2018
# exercício realizado durante o curso
# @jadilson12

print('Gerador de PA')
print('-='*10)
primeiro = int(input('Digite o 1ª termo de uma PA: '))
razao = int(input('Digite a razão dessa PA: '))
termo = primeiro
cont = 1
while cont <=10:
        print('{}'.format(termo), end = ' ► ')
        termo +=razao
        cont += 1
print('Acabou')

