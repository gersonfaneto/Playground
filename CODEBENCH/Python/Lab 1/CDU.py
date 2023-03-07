Num = int(input("Insira um numero de 3 digitos: "))
C = (Num % 10)
D = (Num % 100) // 10
U = (Num // 100)

if 0 <= C <= 9 and 0 <= D <= 9 and 0 <= U <= 9:
  print("{} {} {}" .format(C, D, U))