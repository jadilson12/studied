#Aqui tem varios sample como munipular as string simples e facil varios modelos
cor = '\033[7;40;36m'
corfim = '\033[m'
nome = 'Ana Júlia'
print('Olá, {}{:40} {} vamos estudar python'.format(cor,nome,corfim))
print('Olá, {}{:>40} {} vamos estudar python'.format(cor,nome,corfim))
print('Olá, {}{:*^40} {} vamos estudar python'.format(cor,nome,corfim))
print('Olá, {}{:^40} {} vamos estudar python'.format(cor,nome,corfim))