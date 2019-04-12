# Ano 2018
# exercício realizado durante o curso
# @jadilson12

import random

n = float(input("Pense e digite um numero de 1 a 5 vou tentan adiviar:"))
pc = random.randrange(0,5)
if n == pc:
    print("Legal, Parabens você acertou")
else:
    print('Você pendeu \no numero é {}'.format(pc))
print('---FIM---')