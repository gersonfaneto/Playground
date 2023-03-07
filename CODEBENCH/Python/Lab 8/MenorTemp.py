import numpy as np

temperaturasCidades = np.array(eval(input()))

menoresTemperaturas = []
for i in range(len(temperaturasCidades)):
    menorTemperatura = temperaturasCidades[i][0]
    for j in range(len(temperaturasCidades[i])):
        if menorTemperatura > temperaturasCidades[i][j]:
            menorTemperatura = temperaturasCidades[i][j]
    menoresTemperaturas.append(menorTemperatura)

print("[", end="")
for i in range(len(menoresTemperaturas)-1):
    print(menoresTemperaturas[i], end=", ")
print("{}]".format(menoresTemperaturas[len(menoresTemperaturas)-1]))