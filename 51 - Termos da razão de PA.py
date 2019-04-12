
# Ano 2018
# exercício realizado durante o curso
# @jadilson12

primeiro = int(input('Digite o 1ª termo de uma PA: '))
razao = int(input('Digite a razão dessa PA: '))
decimo =primeiro +(10 - 1 ) * razao
for c in range(primeiro, decimo + razao ,razao):
    print('{}'.format(c), end=' ► ')
print('Acabou')
