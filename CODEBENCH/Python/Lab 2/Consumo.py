Distancia = float(input("Insira o valor da distancia em Km:\n "))
Carros = input("Escolha o tipo do carro (A ou B):\n ")

ConsumoA = Distancia / 8
ConsumoB = Distancia / 12

if Carros == "A":
  print(round(ConsumoA, 2))
else:
  print(round(ConsumoB, 2))
