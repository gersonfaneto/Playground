lado1 = float(input())
lado2 = float(input())
lado3 = float(input())

if lado1 > 0 and lado2 > 0 and lado3 > 0 and lado1 < lado2 + lado3 and lado2 < lado1 + lado3 and lado3 < lado1 + lado2:

    if lado1 == lado2 and lado2 == lado3:
        print("Entradas: {:.1f} , {:.1f} , {:.1f}".format(lado1, lado2, lado3))
        print("Tipo de triangulo: equilatero")
    elif lado1 == lado2 or lado2 == lado3 or lado1 == lado3:
        print("Entradas: {:.1f} , {:.1f} , {:.1f}".format(lado1, lado2, lado3))
        print("Tipo de triangulo: isosceles")
    else:
        print("Entradas: {:.1f} , {:.1f} , {:.1f}".format(lado1, lado2, lado3))
        print("Tipo de triangulo: escaleno")
else:
    print("Entradas: {:.1f} , {:.1f} , {:.1f}".format(lado1, lado2, lado3))
    print("Tipo de triangulo: invalido")
