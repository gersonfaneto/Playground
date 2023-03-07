TNQ = int(input("Insira a quantida de naves no quadrante: "))
TNAF = int(input("Insira a quantidade de naves amigas a frente: "))
TNAD = int(input("Insira a quantidade de naves amigas na direita: "))
TNAE = int(input("Insira a quantidade de naves amigas na esquerda: "))
TNAA = int(input("Insira a quantidade de naves amigas atras: "))
TNI = TNQ - (TNAF+TNAD+TNAE+TNAA)

if 0 <= TNQ <= 1000 and 0 <= TNAF <= 1000 and 0 <= TNAD <= 1000 and 0 <= TNAE <= 1000 and 0 <= TNAA <= 1000:
  print(TNI)
