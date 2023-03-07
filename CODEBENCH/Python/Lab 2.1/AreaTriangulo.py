lado1 = float(input())
lado2 = float(input())
lado3 = float(input())

p = (lado1 + lado2 + lado3) / 2
a = (p * (p-lado1) * (p-lado2) * (p-lado3))**0.5

if lado1 > 0 and lado2 > 0 and lado3 > 0:
    if lado1 < lado2 + lado3 and lado2 < lado1 + lado3 and lado3 < lado1 + lado2:
        print("{:.1f}".format(a))
