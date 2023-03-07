import sys

def criarLista():
    Lista = []
    for line in sys.stdin:
        num = int(line.rstrip("\n"))
        Lista.append(num)
    return Lista

def SelectionSort(Lista):
    n, quantIter = len(Lista), 0
    for i in range(n - 1):
        menor, menorIndex = Lista[i], i
        for j in range(i, n):
            if Lista[j] > menor:
                menor, menorIndex = Lista[j], j
        if menorIndex != i:
            Lista[i], Lista[menorIndex] = Lista[menorIndex], Lista[i]
            quantIter += 1
    return Lista, quantIter

def main():
    ListaInicial = criarLista()
    ListaInicial, QuantIter = SelectionSort(ListaInicial)
    print("Lista Ordenada: {}, {} trocas de indices realizadas.".format(ListaInicial, QuantIter))

if __name__ == '__main__':
    main()
