Num = int(input("Insira um numero de 03 digitos:\n "))
Prop_ = Num % (Num % 100)

if 100 <= Num <= 999 and Prop_ == 0:
  print("SIM")
else:
  print("NAO")
