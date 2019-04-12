from datetime import date
maior = 0
menor = 0
atual = date.today().year
for c in range(1,8):
    anos = int(input('{}º Data de nascimento: '.format(c)))
    idade = atual - anos
    if idade < 21:
        menor += 1
    else:
        maior += 1
print('''  Resultado
 Maiores de idade foram {} 
 Menores de idade foram {}'''.format(maior,menor))