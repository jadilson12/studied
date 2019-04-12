n1 = int(input('Primeiro numeiro:'))
n2 = int(input('Segundo numeiro'))
if n1 > n2:
    maior = n1
    print('O primeiro {} e o segundo {} o primeiro é {}'.format(n1,n2,maior))
elif n2 > n1:
    maior = n2
    print('O primeiro {} e o segundo {} o segundo é {}'.format(n1, n2, maior))
elif n1 == n2:
    print('O  {} e  {}  são iguais'.format(n1, n2,))
