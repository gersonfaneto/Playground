import numpy as np

Bacterias = ["estafilococo", "salmonela", "coli"]
consumoAlimentos = np.array([2, 1, 4, 1, 2, 0, 2, 3, 2]).reshape(3, 3)
quantidadeAlimentos = np.array(eval(input()))
quantidadeBacterias = np.linalg.solve(consumoAlimentos, quantidadeAlimentos)

for bacteria, quantidade in zip(Bacterias, quantidadeBacterias):
    print("{}: {:.1f}".format(bacteria, quantidade))
print(min(zip(quantidadeBacterias, Bacterias))[1])
