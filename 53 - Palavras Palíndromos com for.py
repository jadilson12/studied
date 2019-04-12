f = str(input('digite algo  ')).upper().replace(' ', '')
c = ''
for i in range(len(f) - 1, -1, -1):
    c += f[i]
if f == c:
    print('É um palíndromo')
else:
    print('Não é um palíndromo')