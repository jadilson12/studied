d = int(input('Qual é a distrancia da viagem em Km:'))
if d <= 200:
    v = float(d * 0.50)
    print('O valor gasto vai ser R${} reais '.format(v))
else:
    v = float(d * 0.45)
    print('O valor gasto vai ser R$ {} reais'.format(v))
print('Tenha uma boa viagem')