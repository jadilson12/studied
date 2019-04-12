print('-='*30)
print('Sequencia Fibonacci')
print('-='*30)
n = int(input('quantos numeros que você quer mostar: '))
t1 = 0
t2  = 1
print('-='*30)
print('{}  ->  {} '.format(t1, t2), end=' ')
con = 3
while con <= n:
    t3 = t1 + t2
    print('  ->  {} '.format(t3), end=' ')
    t1=t2
    t2=t3
    con += 1
print('fim')



