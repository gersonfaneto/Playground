a = float(input()) # 1 >= 2 True
b = float(input()) # 3 <= 4 True
c = float(input()) # 2
d = float(input()) # 4

if b > a and d > c:
    if c >= a and d <= b:
        print("Intervalo 1: {} , {}".format(a, b))
        print("Intervalo 2: {} , {}".format(c, d))
        print("Ha intersecao")
    else:
        print("Intervalo 1: {} , {}".format(a, b))
        print("Intervalo 2: {} , {}".format(c, d))
        print("Nao ha intersecao")

else:
    print("Intervalo 1: {} , {}".format(a, b))
    print("Intervalo 2: {} , {}".format(c, d))
    print("Entradas invalidas")
