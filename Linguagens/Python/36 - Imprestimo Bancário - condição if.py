# Ano 2018
# exercício realizado durante o curso
# @jadilson12

#escreva um programa para aprovar o emprestimo bancario para comprar uma casa.
casa = float(input("Valor da casa: R$"))
salario = float(input("Salário do comprador : R$"))
anos = int(input("Quantos anos de finaciamento: "))
pestacao = casa / (anos * 12)
minimo = (salario*30) /100
print('Para pagar a casa de {:.2f} em {} anos'.format(casa,anos), end='')
print(' o valor da pestação é R${:.2f}'.format(pestacao))

if minimo >= pestacao:
    print("\n{}\n".format('Parabéns! Seu empréstimo foi Aprovado'))
else:
    print("\n{}\n ".format('Desculpe seu cretido não foi aprovado'))

