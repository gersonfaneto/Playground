Acoes = {}

for i in range(10):
    acao = input()
    setor = input()
    valorAcao = float(input())
    Acoes[acao] = [setor, 0]
    Acoes[acao][1] = valorAcao

Portifolio = {}
totalAplicado = 0
while True:
    try:
        acaoEscolhida = input()
        quantidadeComprada = int(input())
        Portifolio[acaoEscolhida] = [Acoes[acaoEscolhida][0], (quantidadeComprada * Acoes[acaoEscolhida][1])]
        totalAplicado += Portifolio[acaoEscolhida][1]
    except EOFError:
        break

maiorAporte = 0
setorMaisInvestido = ""
Setores = []
for item in Portifolio:
    Setores.append(Acoes[item][0])
    if Portifolio[item][1] > maiorAporte:
        setorMaisInvestido = Portifolio[item][0]
        maiorAporte = Portifolio[item][1]

if totalAplicado > 0:
    print("RS {:.2f} investidos em {} setores. R$ {:.2f} investidos no setor de {}".format(totalAplicado,
                                                                                       len(set(Setores)),
                                                                                       maiorAporte, setorMaisInvestido))

