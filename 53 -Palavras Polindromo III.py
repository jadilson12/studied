f = str(input('Digite uma frase  ')).upper().upper()
palavras = f.split()
junto = ''.join(palavras)
inverso = junto[::-1] #Opção 1
"""inverso = ''
for letras in range(len(junto) - 1, -1, -1):#opção 2
    inverso += junto[letras]"""

print('O inverso de {} é {}'.format(junto, inverso))
if inverso == junto:
    print('Temos palíndromo')
else:
    print('Não é um palíndromo')