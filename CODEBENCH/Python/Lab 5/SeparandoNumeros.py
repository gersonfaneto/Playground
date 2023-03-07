num = int(input())
Pares = []
Impares = []

while num != 0:
    if num % 2 == 0:
        Pares.append(num)
    else:
        Impares.append(num)

    num = int(input())

print(*Pares, *Impares, sep=", ")
