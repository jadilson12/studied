r = ''
while r != 'S':
    sexo = str(input('Digite seu sexo')).upper()
    if sexo == 'F':
        r = 'S'
        res = 'Sejam bem vinda mulher'
    elif sexo == 'M':
        r = 'S'
        res = 'Sejam bem vindo  Homem'
    else:
        print("Tente de novo você digitou o sexo errado!")
print('Obrigado ! {}'.format(res))





