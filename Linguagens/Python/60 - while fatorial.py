# Ano 2018
# exercício realizado durante o curso
# @jadilson12

n = int(input('Digite uma valor : '))
c = n
f = 1
print('Calculando {}! = '.format(n), end=' ')
while c > 0:
     print(' {} '.format(c), end=' ' )
     print('  x  ' if  c  > 1  else  '  =  ' , end=' ')
     f = f * c
     c -= 1
print('{}'.format(f))