# Ano 2018
# exercício realizado durante o curso
# @jadilson12

s = cont = 0
print('-='*20)
print('999 para encerrar o programa')
print('-='*20)
while True:
    n = int(input('Digite um numero: '))
    if n == 999:
        break
    s += n
    cont += 1
print(f'Você digitou {s} e a soma foi {cont} vez')

