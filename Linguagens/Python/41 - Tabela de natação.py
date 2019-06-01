# Ano 2018
# exercício realizado durante o curso
# @jadilson12

from datetime import date
ano_atual = date.today().year
ano_nasceu = int(input('Data de nascimento: '))
idade= ano_atual - ano_nasceu
print('A idade é {} anos'.format(idade))
if idade < 9:
    print('O atleta é MIRIM')
elif 9 <= idade < 14:
    print('O atleta é INFANTIL')
elif 14 <= idade < 19:
    print('O atleta é JUNIOR')
elif 19 <= idade < 25:
    print('O atleta é SENIOR')
else:
    print('O atleta é MASTER')
