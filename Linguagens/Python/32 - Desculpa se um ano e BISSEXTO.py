# Ano 2018
# exercício realizado durante o curso
# @jadilson12

ano = int(input('Digite data qualquer ex: 1900:'))
if (ano % 4 == 0) and (ano % 100 != 0) :
    print('Este ano {} é bissexto'.format(ano))
else:
    print('O ano que você digitou não é bissexto.')
print('---FIM----')