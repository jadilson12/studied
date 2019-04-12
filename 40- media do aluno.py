nota1 = float(input('1º nota:'))
nota2 = float(input('2º nota:'))
media = (nota1 + nota2) / 2
print('Tirando {:.1f} e {:.1f} sua media é {:.1f}'.format(nota1,nota2,media))
if media < 5.0:
    print('Aluno Reprovado')
elif 5.0 <= media < 7.0: # Isso mesmo media >= 5 and media < 7
    print('Aluno de Recuperação')
else:
    print('Aluno Aprovado')
