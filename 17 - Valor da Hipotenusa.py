# Ano 2018
# exercício realizado durante o curso
# @jadilson12

import math
a = float(input('Digite o cateto aposto em cm: '))
b = float(input(('Digite o cateto adjacente em cm: ')))
c = a**2 + b**2
#c = math.exp(math.radians(a)) + math.exp(math.radians(b))
print('O valor da Hipotenusa é {:.2f} cm.'.format(math.sqrt(c)))

