num = int(input())
negativos = positivos = total = 0

while num != 0:
    if num > 0:
        positivos += 1
        total += 1
    else:
        negativos += 1
        total += 1
    num = int(input())

if total > 0:
    positivos /= total
    negativos /= total
    print(round(positivos * 100, 1))
    print(round(negativos * 100, 1))
else:
    print(0.0)
    print(0.0)