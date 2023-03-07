Salario = float(input("Insira o valor do seu salario: "))
QuantConta = int(input("Insira a quantidade contas a serem pagas: "))
Despesas = []

Soma = 0


for i in range(QuantConta):
  Conta = float(input("Insira o valor da conta a ser paga: "))
  Despesas.append(Conta)
  
Balanco = Salario - sum(Despesas)

if Balanco > 0:
  print("Parabens! Este mes voce economizou {:.2f} reais".format(Balanco))
else:
  print("Voce precisa reduzir suas despesas em {:.2f} reais".format(Balanco * (-1)))