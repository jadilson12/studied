from random import randint
from time import sleep
itens = ('Pedra','Papel','Tesoura')
pc =randint(0,2)

print('''Suas opção
[ 0 ] - Pedra
[ 1 ] - Papel
[ 2 ] - Tesoura''')
jogador = int(input('Qual é sua jogada: '))
print('JO')
sleep(1)
print('KEN')
sleep(1)
print('PO !!!')
sleep(1)
print('='*25)
print('O pc jogou {}'.format(itens[pc]))
print('O jogador {}'.format(itens[jogador]))
print('='*25)
if pc == 0: #PC jogou pedra
    if jogador == 0:
        print('EMPATE')
    elif jogador == 1:
        print('JOGADOR GANHOU')
    elif jogador == 2:
        print('PC GANHOU')
    else:
        print('JOGADA INVALIDA')

elif pc == 1:#PC jogou Papel
    if jogador == 0:
        print('PC GANHOU')
    elif jogador == 1:
        print('EMPATE')
    elif jogador == 2:
        print('JOGADOR GANHOU')
    else:
        print('JOGADA INVALIDA')

elif pc == 2:#PC jogou Tesoura
    if jogador == 0:
        print('JOGADOR GANHOU')
    elif jogador == 1:
        print('PC GANHOU')
    elif jogador == 2:
        print('EMPATE')
    else:
        print('JOGADA INVALIDA')
