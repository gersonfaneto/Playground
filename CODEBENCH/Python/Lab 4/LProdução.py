carros = dias = 0
producaoDia = int(input())

while producaoDia >= 0:
    carros += producaoDia
    dias += 1
    producaoDia = int(input())

if dias > 0:
    media = carros / dias
    print(carros)
    print(dias)
    print(round(media, 1))
else:
    print(0)
    print(0)
    print(0.0)

