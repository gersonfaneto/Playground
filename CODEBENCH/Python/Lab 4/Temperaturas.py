Continuar = True
Farenheit = []
Celsius = []
while Continuar:

    I = int(input())
    F = int(input())
    P = int(input())

    if I <= F and P > 0:
        for i in range(I, F+1, P):
            F = (i * 1.8) + 32
            Celsius.append(i)
            Farenheit.append(F)
    if I >= F and P > 0:
        for i in range(I, F-1, -P):
            F = (i * 1.8) + 32
            Celsius.append(i)
            Farenheit.append(F)

    Continuar = input()[0].lower() == "s"

for i in range(len(Celsius)):
    print(Celsius[round(i, 1)], Farenheit[round(i, 1)])

