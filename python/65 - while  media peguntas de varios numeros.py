# Ano 2018
# exercício realizado durante o curso
# @jadilson12

p='S'
c=s=m=ep=0
men = 1
while p != 'N':
    v = int(input('Digite uma valor'))
    c += 1
    s += v
    if v > m:
        m = v
    else:
        if  v < m:
            men = v
        else:
            ep += 1
    med = s / c
    p = str(input('Deseja continual S/N')).upper()
print('digitou {} vezes a soma foi {}'.format(c,s))
print('O maior numero foi {}, o menor {}, foram {} enpates \n a media foi {}'.format(m,men,ep,med))