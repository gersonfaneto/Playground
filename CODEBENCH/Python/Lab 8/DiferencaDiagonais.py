import numpy as np

Matriz = []
for i in range(int(input())):
    Matriz.append(eval(input()))
Matriz = np.array(Matriz)
MatrizInv = np.fliplr(Matriz)

diferencaDiagonais = np.trace(Matriz) - np.trace(MatrizInv)
print(diferencaDiagonais)
