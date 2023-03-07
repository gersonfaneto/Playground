import numpy as np

cargaHoraria = np.array(eval(input()))

somaHoras = []
for i in range(len(cargaHoraria)):
    soma = 0
    for j in range(len(cargaHoraria[i])):
        soma += cargaHoraria[i][j]
    somaHoras.append(soma)

print("[", end="")
print(*somaHoras, end="")
print("]")
