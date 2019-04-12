print('-='*20)
print('-='*6, 'T A B U A D A','-='*6)
print('-='*20)
t = 0
v = 1
while True:
    n = int(input('Qual o numero que você que ver na tabuada? '))
    print('-=' * 20)
    if n < 0:
        break
    for c in range(1, 11):
        print(f'{n} x {c} = {n*c}')
    print('-=' * 20)
print('Fim do programa volte sempre')


