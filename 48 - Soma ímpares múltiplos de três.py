total = 0
cont = 0
for c in range(1, 501, 2):
    if c%3 == 0:
        cont += 1
        total += c
print('Foram contados {} todos soram {}'.format(cont,total))
