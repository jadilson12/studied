# Ano 2018
# exercício realizado durante o curso
# @jadilson12

maior = 0
menor = 0
n_maior = ''
n_menor = ''
for c in range(1, 6):
    n = str(input('Digite {}º nome:'.format(c)))
    peso = float(input('O {} infome o peso: '.format(n)))
    if maior < peso:
        maior = peso
        n_maior = n
    else:
        menor = peso
        n_menor = n
print('=+'*10)
print('''O mais pesado é {} com {}
O mais leve é {} com {} Kg '''.format(n_maior, maior, n_menor, menor))
print('=+'*10)
