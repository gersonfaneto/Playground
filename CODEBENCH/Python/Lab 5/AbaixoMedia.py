Idades = eval(input())
Alturas = eval(input())
counter = 0

mediaAltura = sum(Alturas)/len(Alturas)

for j in range(len(Idades)):
    if Idades[j] > 13 and Alturas[j] < mediaAltura:
        counter += 1

print(counter)
