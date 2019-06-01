# Ano 2018
# exercício realizado durante o curso
# @jadilson12

from random import randint
pc = randint(0, 10)
print(pc)
print('Sou seu computador acabei de pensar um numero entre 0 a 10, ')
print('Será que você consegue adiviar? ')
acertou = False
palpites = 0
while not acertou:
    palpites += 1
    jogador = int(input('Qual é seu palpite ?  '))
    if jogador == pc:
        acertou = True
    else:
        if jogador < pc:
                print('Mais ... Tente mais uma vez. ')
        elif jogador > pc:
                print('Menos...Tente mais uma vex. ')
print('Para acerta você tentou {} vezes! parabés  '.format(palpites))
