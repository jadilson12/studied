dia = int(input('Quandos dias você ficou com o carro: '))
km = float(input('Quando Km rodou: '))
print('O valor a ser é R$ {:.2f} reais'.format((dia * 60) + (km * 0.15)))