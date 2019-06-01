# Ano 2018
# exercício realizado durante o curso
# @jadilson12

soma = 0
cont = 0
for c in range(0,7):
        n = int(input("Digite um {} valor:".format(c)))
        if n % 2 ==0:
                soma += n
                cont += 1


print('A soma de Pares foi {} A soma dos némeros pares foram {}'.format(cont, soma))