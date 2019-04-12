# Ano 2018
# exercício realizado durante o curso
# @jadilson12

peso = float(input('Digite o peso:'))
altura = float(input('Digite altura:'))
imc = peso /(altura ** 2)
print('O peso {}Kg com altura de {}mt o IMC foi {:.1f}'.format(peso,altura,imc))
if imc < 18.5:
    print('Abaixo do peso')
elif imc < 25:
    print('Peso Ideial')
elif imc < 30:
    print('Sobrepeso')
elif imc < 40:
    print('Obesidade')
else:
    print('Obesidade morbida')