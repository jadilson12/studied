from random import randint
print('-='*20)
print('  Vamos jogar PAR ou IMPAR')
print('-='*20)
v = 0
while True:
    jogador =int(input('Digite um valor: '))
    pc = randint(0,11)
    total = jogador + pc
    tipo = ' '
    while tipo not in 'PpIi':
        tipo = str(input('PAR ou IMPAR? [P/I] ')).strip().upper()[0]
    print(f'Voce jogou {jogador} e o computador jogou {pc}. Total de {total} ', end='')
    print('Deu PAR' if total % 2 == 0 else 'Deu IMPAR')
    if tipo == 'P':
        if total % 2 == 0:
            print('Você venceu')
            v += 1
        else:
            print('Você perdeu')
            break

    elif tipo == 'I':
        if total % 2 == 1:
            print('Vocẽ venceu')
            v += 1
        else:
            print('Você perdeu')
            break
    print('Vamos jogar novamente !')
print(f'GAME OVER! Você ganhou {v} vezes')





