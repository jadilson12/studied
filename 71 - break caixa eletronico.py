print('='*30)
print('{:^30}'.format('BRANCO CCC'))
print('='*30)
valor = int(input('Qual o valor quer sacar: '))
total = valor
ced = 50
totced = 0
while True:
    if total >= ced:
        total -= ced
        totced += 1
    else:
        if totced > 0:
            print(f'Total de {totced} cedulas de R${ced}')
        if ced == 50:
            ced = 20
        elif ced ==20:
            ced = 10
        elif ced == 10:
            ced = 5
        elif ced == 5:
            ced = 2
        elif ced == 2:
            ced = 1
        elif ced == 1:
            ced = 1
        totced = 0
        if total == 0:
            break
print('='*20)
print('Volte sempre ao BANCO CCC! Tenha um bom dia')





