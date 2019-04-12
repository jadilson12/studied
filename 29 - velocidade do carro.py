v = int(input('Digite a velocidade do carro:'))
if v > 80:
    multa = float(v - 80) * 7.00
    print('O carro foi encedeu {} KM acima do primitido\nO valor da multa foi de R$ {} reais'.format(v-80,multa))
else:
    print('Bom motorista velocidade normal')
print('\n----fim----')
