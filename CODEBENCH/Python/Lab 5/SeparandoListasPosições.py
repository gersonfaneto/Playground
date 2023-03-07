PosicaoPar = []
PosicaoImpar = []

tamanhoLista = int(input())
Original = eval(input())

for j in range(0, len(Original), 2):
    PosicaoPar.append(Original[j])
for k in range(1, len(Original), 2):
    PosicaoImpar.append(Original[k])

if len(PosicaoPar) > 0:
    print(PosicaoPar)
if len(PosicaoImpar) > 0:
    print(PosicaoImpar)


