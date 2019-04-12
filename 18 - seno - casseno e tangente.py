from math import cos, tan, radians, sin
ang = float(input('Digite um valor do angulo : '))
sen = sin(radians(ang))
print('O angulo de {} tem o SENO de {:.2f}'.format(ang, sen))
casseno = cos(radians(ang))
print('O angulo de {} tem o CASEENO de {:.2f}'.format(ang, casseno ))
tangente = tan(radians(ang))
print('O angulo de {} tem o TANGENTE de {:.2f}'.format(ang, tangente ))