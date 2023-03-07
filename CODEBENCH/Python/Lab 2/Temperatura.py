Escala = input("Digite F para Farenheit e C para Celsius:\n")
Valor = int(input("Insira o valor a ser convertido:\n"))

F = (Valor - 32) / 1.8
C = (Valor * 1.8) + 32

if Escala == "F":
  print("{}".format(round(F, 1)))
else:
  print("{}".format(round(C, 1)))