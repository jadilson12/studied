print('\n -> Padaria do Seu Zé <- \n -> Destaque do  mês <- \n')
f = str(input('Digite o nome do fucionario: '))
s = float(input('Digite o sálario do {}: '.format(f)))
print('Parabens {} \npela sua promoção veja seu novo salário \ncom 15% de aumento R$ {:.2f} reais'.format(f, s + ((s*15)/100)))