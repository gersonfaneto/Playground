import numpy as np

cargaHoraria = np.array(eval(input()))

maioresPagamentos = []
for i in range(len(cargaHoraria)):
    maioresPagamentos.append(max(cargaHoraria[i]))

print(*maioresPagamentos, sep = "\n")
