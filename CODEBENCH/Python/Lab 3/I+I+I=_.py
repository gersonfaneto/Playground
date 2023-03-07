I = int(input("Insira um numero: "))
F = int(input("Agora insira outro: "))
Num = []

for num in range(I, F + 1):
  Num.append(num)
  Soma = sum(Num)
print(Soma)