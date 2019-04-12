# Ano 2018
# exercício realizado durante o curso
# @jadilson12

#Escreva um programa que leia um numero interiro qualquer e depois peça para comveter para base binaria
n = int(input("Digite um numero inteiro : "))
print('='*20)
print("{}\n{}\n{}".format("1 - Binário","2 - Octal","3 - Hexadecimal"))
print('='*20)
opcao = int(input('Digite opção:'))
if opcao == 1:
    print('{} convertido para Binário foi a {}'.format(n,bin(n)[2:]))
elif opcao == 2:
    print('{} convertido para Octal foi a {}'.format(n, oct(n)[2:]))
elif opcao == 3:
    print('{} convertido para Hexadecimal foi a {}'.format(n, hex(n)[2:]))
else:
    print("Opçao invalida")
