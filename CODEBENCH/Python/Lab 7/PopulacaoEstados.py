PopulacaoEstados = {}
for i in range(26):
    estado = input()
    populacaoCapital = int(input())
    PopulacaoEstados[estado] = [populacaoCapital, populacaoCapital]
    for j in range(1, 10):
        populacaoCidade = int(input())
        PopulacaoEstados[estado][1] += populacaoCidade

estadoEscolhido = input()
print("{} {:.2f}".format(PopulacaoEstados[estadoEscolhido][0], (PopulacaoEstados[estadoEscolhido][1]) / 10))

