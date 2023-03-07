def verificarCasa(posX, posY, Moedas, ForcaVital):
    if Tabuleiro[posY][posX] == 11:
        Moedas += 1
        Tabuleiro[posY][posX] = 0
    elif Tabuleiro[posY][posX] == 22:
        ForcaVital -= 5
    return Moedas, ForcaVital


nLinhas = int(input())
nColunas = int(input())
Tabuleiro = eval(input())
movimentosJoe = input()
moedas, forcaVital = 0, 100
y, x = 0, 0

for i in range(len(movimentosJoe)):
    if movimentosJoe[i] == "W":
        y -= 1
    elif movimentosJoe[i] == "A":
        x -= 1
    elif movimentosJoe[i] == "S":
        y += 1
    else:
        x += 1
    moedas, forcaVital = verificarCasa(x, y, moedas, forcaVital)

print("posicao x: {}\n"
      "posicao y: {}\n"
      "moedas: {}\n"
      "life: {}".format(x, y, moedas, forcaVital))
