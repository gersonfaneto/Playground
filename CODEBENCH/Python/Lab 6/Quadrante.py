def verificaQuadrante(x):
    if x < 0 or x > 360:
        return "not an angle, man!"
    if x == 90 or x == 270:
        return "eixo vertical"
    elif x == 180 or x == 360 or x == 0:
        return "eixo horizontal"
    else:
        if 0 < x < 90:
            return 1
        elif 90 < x < 180:
            return 2
        elif 180 < x < 270:
            return 3
        elif 270 < x < 360:
            return 4


print(verificaQuadrante(int(input())))

