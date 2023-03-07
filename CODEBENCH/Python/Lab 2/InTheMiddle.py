Num1 = int(input("Insira o primeiro numero:\n "))
Num2 = int(input("Agora o segundo:\n "))
Num3 = int(input("Por fim o terceiro:\n "))

if Num1 < Num2 < Num3 or Num3 < Num2 < Num1:
  print(Num2)
elif Num2 < Num3 < Num1 or Num1 < Num3 < Num2:
  print(Num3)
elif Num2 < Num1 < Num3 or Num3 < Num1 < Num2:
  print(Num1)
  