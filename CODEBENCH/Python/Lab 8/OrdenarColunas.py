matrizEntrada = eval(input())
matrizSorted = [[0 for i in range(len(matrizEntrada[0]))] for j in range(len(matrizEntrada))]

colunasSorted = []
for i in range(len(matrizEntrada)):
    colunaSorted = []
    for j in range(len(matrizEntrada[i])):
        colunaSorted.append(matrizEntrada[j][i])
    colunasSorted.append(sorted(colunaSorted, reverse=True))

for i in range(len(colunasSorted)):
    for j in range(len(colunasSorted[i])):
        matrizSorted[j][i] = colunasSorted[i][j]

print("[", end="")
for i in range(len(matrizSorted)-1):
    print("[", end="")
    print(*matrizSorted[i], end="")
    print("]")
print("[", end="")
print(*matrizSorted[i+1], end="")
print("]]")

