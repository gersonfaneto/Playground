def InsertionSort(Lista):
    for i in range(2):
        menor, j = Lista[i], i - 1
        while j >= 0 and Lista[j] > menor:
            Lista[j + 1] = Lista[j]
            j -= 1
        Lista[j + 1] = menor
    return Lista

def main():
    Lista = eval(input())
    print(InsertionSort(Lista))

if __name__ == '__main__':
    main()
