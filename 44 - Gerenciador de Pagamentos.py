# Ano 2018
# exercício realizado durante o curso
# @jadilson12

print('{:=^40}'.format(' LOJAS J144DF '))
preco = float(input('Qual é o valor do compras: R$'))
print('''Selecione a forma de pagamento
[1] - A vista no Dinheiro/cheque
[2] - A vista no Cartão 
[3] - Pacelar cartão''')
opcao = int(input('Qual é a forma ?:'))
if opcao == 1:
    total = preco - (preco * 10) / 100
elif opcao ==2:
    total = preco - (preco * 5) /100
elif opcao == 3:
    pacela = int(input('Pacelar em quantas vez?: '))
    if pacela <= 2:
        pestacao = preco / pacela
        total = pestacao * pacela
        print('Foi dividido em [{}] pacelas de R${:.2f} sem juros'.format(pacela,pestacao))
    elif pacela >= 3:
        pestacao = (preco + (preco * 20 / 100)) / pacela
        print('Foi dividido em [{}] pacelas de R${:.2f} com  juros'.format(pacela, pestacao))
        total = pestacao * pacela
else:
    total = preco
    print('Opção digitada invalida na sua forma depagamento tente novamente')
print('Sua compra de RS{} vai ficar por R${:.2f} no final'.format(preco, total))