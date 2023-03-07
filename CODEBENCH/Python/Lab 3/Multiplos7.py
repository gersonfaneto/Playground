I = int(input("Insira um numero: "))
F = int(input("Agora insira outro numero: "))
i = 0

for i in range(I, F+1):
  if (i % 7) == 0:
    print(i, end=" ")