# Ano 2018
# exercício realizado durante o curso
# @jadilson12

soma = total = cont = menor = totmil = 0
barato = ' '
while True:
    produto = str(input('Nome produto: '))
    preco = float(input('Preço R$'))
    pregunta = ' '
    while pregunta not in 'SN':
        pregunta = str(input('Quer continuar [S/n]')).strip().upper()[0]
    total += preco
    cont += 1
    if preco > 1000:
        totmil += 1
    if cont == 1  or preco < menor:
        menor = preco
        barato = produto
    if pregunta == 'N':
        break
print('{:-^40}'.format('FIM DO PROGRAMA'))
print(f'Total de gasto foi {total}')
print(f'Temos {totmil} que custam mais de 1000 reais')
print(f'O {barato} é o mais barato')

