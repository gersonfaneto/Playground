def BuscaBinaria(elemento, Lista, inicio, fim):
    meio = (inicio + fim) // 2
    if inicio > fim:
        return -1
    elif Lista[meio] == elemento:
        return meio
    else:
        if Lista[meio] > elemento:
            return BuscaBinaria(elemento, Lista, inicio, meio - 1)
        else:
            return BuscaBinaria(elemento, Lista, meio + 1, fim)

def main():
    Lista = eval(input())
    elementoBuscado = int(input())
    index = BuscaBinaria(elementoBuscado, Lista, 0, len(Lista) - 1)
    print(index)

if __name__ == '__main__':
    main()
