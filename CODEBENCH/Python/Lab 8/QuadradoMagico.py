import numpy as np

Matriz = eval(input())

verificarRepeticao = []
for i in range(len(Matriz)):
    for j in range(len(Matriz[i])):
        verificarRepeticao.append(Matriz[i][j])

somaLinhas = []
for i in range(len(Matriz)):
    soma = 0
    for j in range(len(Matriz[i])):
        soma += Matriz[i][j]
    somaLinhas.append(soma)

somaColunas = []
for i in range(len(Matriz)):
    soma = 0
    for j in range(len(Matriz[i])):
        soma += Matriz[j][i]
    somaColunas.append(soma)

Matriz = np.array(Matriz)
MatrizInv = np.fliplr(Matriz)

verificarRepeticao = len(set(verificarRepeticao)) == len(Matriz)**2
somaColunas = len(set(somaColunas)) == 1
somaLinhas = len(set(somaLinhas)) == 1
somaIguais = somaLinhas == somaColunas
somaDiagonais = np.trace(Matriz) == np.trace(MatrizInv)
quadradoMagico = verificarRepeticao and somaColunas and somaLinhas and somaIguais and somaDiagonais

print("SIM" if quadradoMagico else "NAO")
