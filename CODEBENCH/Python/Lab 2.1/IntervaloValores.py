x = float(input())
a = float(input())
b = float(input())

if b <= a:
    print("Entradas {:.1f} e {:.1f} invalidas".format(a, b))

else:
    if a <= x <= b:
        print("{:.1f} pertence ao intervalo {:.1f} , {:.1f}".format(x, a, b))
    else:
        print("{:.1f} nao pertence ao intervalo {:.1f} , {:.1f}".format(x, a, b))