# Ano 2018
# exercício realizado durante o curso
# @jadilson12

salario = int(input('Digite o sálario de um fucionário: '))
if salario > 1250:
    aumento = ((salario * 10) / 100)
if salario <= 1250:
    aumento = ((salario * 15) / 100)
print('O valor que vai receber a mais será R$ {} reais'.format(aumento))
print('Então o novo sário será de R$ {} reais'.format(aumento + salario))
print('-----FIM----')