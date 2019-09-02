# Ano 2018
# exercício realizado durante o curso
# @jadilson12

tot18 = totH = totm20 = 0
while True:
    idade = int(input('IDADE: '))
    sexo = ' '
    while sexo not in 'MF':
         sexo = str(input('Sexo: [M/F]: ')).strip().upper()[0]
    if idade >= 18:
        tot18 += 1
    if sexo == 'M':
        totH += 1
    if sexo == 'F' and totm20 < 20:
        totm20 += 1
    resp = ' '
    while resp not in 'SN':
        resp = str(input('Quer continuar: [S/N]')).strip().upper()[0]
    if resp == 'N':
      break
print('FIM DO PROGRAMA ')
print(f'Total de pessoas com mais de 18 anos: {tot18}')
print(f'Total de homens cadastrado foi {totH}')
print(f'O total de mulheres menor que 20 anos foram: {totm20}')
