import sys

def criarLista():
    Lista = []
    for line in sys.stdin:
        nome = line.rstrip("\n")
        Lista.append(nome)
    return Lista

def InsertionSort(Lista):
    n, quantIter = len(Lista), 0
    for i in range(1, n):
        menor, j = Lista[i], i - 1
        while j >= 0 and Lista[j] > menor:
            Lista[j + 1] = Lista[j]
            j -= 1
            quantIter += 1
        Lista[j + 1] = menor
    return Lista, quantIter

def main():
    Lista = criarLista()
    Lista, quantIter = InsertionSort(Lista)
    for nome in Lista:
        print(nome)
    print(quantIter, "troca realizada" if quantIter <= 1 else "trocas realizadas")

if __name__ == '__main__':
    main()
