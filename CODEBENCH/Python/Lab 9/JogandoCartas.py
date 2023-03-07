nCartas = 1
while nCartas > 0:
    nCartas = int(input())
    CartasPilha = [i for i in range(1, nCartas + 1)]
    CartasDescartadas = []
    while len(CartasPilha) > 1:
        cDescartada, cBase = CartasPilha.pop(0), CartasPilha.pop(0)
        CartasDescartadas.append(cDescartada)
        CartasPilha.append(cBase)
    if len(CartasPilha) > 0:
        print("descartadas: ", end = "")
        print(*CartasDescartadas, sep = ", ")
        print("remanescente: ", end = "")
        print(*CartasPilha)
