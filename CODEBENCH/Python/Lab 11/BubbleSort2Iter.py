def BubbleSort(Lista):
    n = len(Lista)
    for i in range(2):
        for j in range(n - 1):
            if Lista[j] > Lista[j + 1]:
                Lista[j], Lista[j + 1] = Lista[j + 1], Lista[j]
    return Lista

def main():
    Lista = eval(input())
    print(BubbleSort(Lista))

if __name__ == '__main__':
    main()
