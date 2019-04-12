from datetime import date
ano_nasceu = int(input('O ano que você nasceu:'))
ano_atual = date.today().year
idade = ano_atual - ano_nasceu
if idade < 18:
    diferencia = 18 - idade
    an = ano_atual + diferencia
    print('Voce tem {} anos ainda falta {} anos para se apresentar mo exercito'.format(idade,diferencia))
    print('Seu ano para alistar será  {}'.format(an))
elif idade == 18:
    print('Ótimo, você tem {} anos está na hora se apresentar mo exercito'.format(idade))
elif idade >= 18:
    diferencia = idade - 18
    an = ano_atual - diferencia
    print('Voce tem {} anos ainda já se alistou? já pasou do tempo {} anos para  apresentar mo exercito'.format(idade,diferencia))
    print('Seu ano para alistar foi em  {}'.format(an))

