# Ano 2018
# exercício realizado durante o curso
# @jadilson12

cores = {
    'vermelho': '\033[31m',
    'verde': '\033[32m',
    'azul': '\033[34m',
    'ciano': '\033[36m',
    'magenta': '\033[35m',
    'amarelo': '\033[33m',
    'preto': '\033[30m',
    'branco': '\033[37m',
    'original': '\033[0;0m',
    'reverso': '\033[2m',
}

n1 = int(input('{}Digite uma valor:{} '.format(cores['vermelho'],cores['original'])))
sus = (n1 + 1)
ante = (n1 - 1)
print('{}O sucessor de {} é {} \n{}O antecessor de {} é {}'.format(cores['verde'],n1,sus,cores['azul'],n1, ante))
