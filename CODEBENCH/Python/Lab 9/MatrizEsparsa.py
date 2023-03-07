def construirMatriz(nLinhas, nColunas):
    Matriz = []
    for i in range(nLinhas):
        linha = list(map(int, input().split(",")))
        Matriz.append(linha)
    return Matriz

def somarElementos(Matriz, nTriplas):
    for i in range(nTriplas):
        linha, coluna, valor = map(int, input().split(","))
        Matriz[linha - 1][coluna - 1] += valor
    return Matriz

def coletarValores(Matriz, nValores):
    Valores = []
    for i in range(nValores):
        linha, coluna = map(int, input().split(","))
        valor = Matriz[linha - 1][coluna - 1]
        Valores.append(valor)
    return Valores

def main():
    n, m = map(int, input().split(","))
    MatrizInicial = construirMatriz(n, m)
    w = int(input())
    MatrizEsparsa = somarElementos(MatrizInicial, w)
    k = int(input())
    ValoresColetados = coletarValores(MatrizEsparsa, k)
    for valor in ValoresColetados:
        print(valor)

if __name__ == "__main__":
    main()
