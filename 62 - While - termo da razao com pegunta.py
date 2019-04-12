print('Gerador de PA')
print('-='*10)
primeiro = int(input('Digite o 1ª termo de uma PA: '))
razao = int(input('Digite a razão dessa PA: '))
termo = primeiro
cont = 1
total = 0
mais = 10
while mais != 0 :
    total += mais
    while cont <=total :
        print('{}'.format(termo), end = ' ► ')
        termo +=razao
        cont += 1
    print('Pause')
    mais = int(input("Quantos termos você quer mais:  "))
print('A projeção foi  finalizado o tal de tal de numeros {} '.format(total))
