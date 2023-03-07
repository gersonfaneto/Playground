Despesas = {}

for i in range(4):
    tipoDespesa = input()
    porcentagemDespesa = int(input())
    Despesas[tipoDespesa] = porcentagemDespesa / 100

valorRenda = float(input())
for despesa in Despesas:
    Despesas[despesa] *= valorRenda

for chave in sorted(Despesas):
    print("{}: R$ {:.2f}".format(chave, Despesas[chave]))
