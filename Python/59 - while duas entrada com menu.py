# Ano 2018
# exercício realizado durante o curso
# @jadilson12

from time import  sleep

v1 = int(input('Digite o 1º valor: '))
v2 = int(input('Digite o 2º valor: '))
opcao = 0
while opcao != 5:
    print('[1] - Soma\n[2] - Multiplicar\n[3] - Maior\n[4] - novos numeros\n[5] - Sair do programa')
    opcao = int(input('Qual é  a opção'))
    if opcao == 1:
        soma = v1 + v2
        print('A soma entre {} e {} é {}'.format(v1, v2, soma))
    elif opcao == 2:
        multiplicacao = v1 * v2
        print('A multiplicação entre {} e {} é {} '.format(v1, v2, multiplicacao))
    elif opcao == 3:
        if v1 > v2:
            maior = v1
        else:
            maior = v2
        print('Entre os numero {} e {} o maior é {}'.format(v1, v2, maior))
    elif opcao == 4:
        print('Informe o numero novamente. ')
        v1 = int(input('Primeiro numero'))
        v2 = int(input('Segundo numero'))
    elif opcao == 5:
        print('Finalizando')
    else:
        print('Opção invalida tente novamente. ')
    sleep(3)
print('Fim do programa,  volte sempre ')
