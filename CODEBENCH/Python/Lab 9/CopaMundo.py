Times = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"]

def calcularVencedor(FaseAtual, quantPartidas):
    ProxFase = []
    for i in range(quantPartidas):
        Placar = list(map(int, input().split("x")))
        Time1, Time2 = FaseAtual.pop(0), FaseAtual.pop(0)
        if Placar[0] > Placar[1]:
            ProxFase.append(Time1)
        else:
            ProxFase.append(Time2)
    return ProxFase

def main():
    QF = calcularVencedor(Times, 8)
    OF = calcularVencedor(QF, 4)
    SF = calcularVencedor(OF, 2)
    Placar = list(map(int, input().split("x")))
    Time1, Time2 = SF.pop(0), SF.pop(0)
    if Placar[0] > Placar[1]:
        print(Time1)
    else:
        print(Time2)

if __name__ == "__main__":
    main()