E = int(input("Insira o valor do espaço: "))
T = int(input("Insira o valor do tempo: "))
V = E//T

if 1 <= E <= 500 and 1 <= T <= 100:
  print(V)
