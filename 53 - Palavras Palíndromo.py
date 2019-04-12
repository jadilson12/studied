print('='*40)
print('{:=^40}'.format(' Olá,Seja bem vindo '))
print('='*40)
print('Analizar é um Palíndromo\n')

frase = input('Digite uma frase: ').strip().replace(' ', '').upper()
frasetratada = frase.replace('', ' ').strip().split()
frasetratada.reverse()
frasereverso = str(frasetratada).replace('[','').replace(']', '').replace("'", '').replace(',', '').replace(' ', '').upper()
if frase == frasereverso:
    print('\n\033[1;32mEsta frase é um Palíndromo\033[m')
else:
    print('\033[1;31mEstá frase não é um Palíndromo\033[m\n')