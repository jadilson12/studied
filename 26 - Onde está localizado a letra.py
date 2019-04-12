n = input('Digite uma frase com varias palavras: ')
print('quantidade de vez a letra "A": {}'.format(n.upper().count('A')))
print('A primeira vez aparece na prosição : {}'.format(n.upper().find('A')+1))
print('A última vez aparece na prosição:{} '.format(n.upper().rfind('A')+1))