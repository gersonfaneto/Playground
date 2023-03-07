Objetivo = int(input("Insira o valor a ser alcancado:\n"))
Soma = []
Contador = 0

while sum(Soma) < Objetivo and sum(Soma) != Objetivo:
  Num = int(input("Insira um numero:\n"))
  Soma.append(Num)
  Contador += 1

Media = sum(Soma) / Contador

print(Contador)
print(Media)
