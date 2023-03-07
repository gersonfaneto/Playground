L = float(input("Insira o valor da recompensa para Luffy:\n "))
Z = float(input("Insira o valor da recompensa para Zoro:\n "))
N = float(input("Insira o valor da recompensa para Nami:\n "))
U = float(input("Insira o valor da recompensa para Usopp:\n "))
S = float(input("Insira o valor da recompensa para Sanji:\n "))

Soma = L+Z+N+U+S

if 0 < L < 1000000000 and 0 < Z < 1000000000 and 0 < N < 1000000000 and 0 < U < 1000000000 and 0 < S < 1000000000:
  print(Soma)
  