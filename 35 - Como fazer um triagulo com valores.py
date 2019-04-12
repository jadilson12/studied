# Ano 2018
# exercício realizado durante o curso
# @jadilson12

a = float(input('Primeiro valor: '))
b = float(input('Sengundo valor: '))
c = float(input('Teceiro valor: '))
if a < c + b and b < a + c and c < b + a:
    print(" Ok pode formar um triagulo")
else:
    print("Não pode formar um triagulo")
print('-'*30)
