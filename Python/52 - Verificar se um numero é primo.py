# Ano 2018
# exercício realizado durante o curso
# @jadilson12

n = int(input('Digite um valor'))
cont = 0
print('O numero informado é divisível por: ')
for c in range(1,n+1):
    if n%c == 0:
        print('\033[31m', end=' ')
        cont += 1
    else:
        print('\033[38m', end = ' ')
    print('{}'.format(c), end = ' ')

print('\n\033[mO numero {} foi divisivel por {} vezes'.format(n,cont))
if cont <= 2:
    print('É por isso que ele é primo')
else:
    print('É por isso que ele NÂO é primo')
