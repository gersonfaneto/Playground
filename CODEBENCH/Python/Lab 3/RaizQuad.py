N = int(input("Insira um numero: "))
Primos = []
Soma = 0

for i in range(0, N):
  if (i % 2) != 0:
    Soma += i
    Primos.append(i)
    if Soma == N or Soma > N:  
      break

if Soma == N:        
  print(len(Primos))
else:
  print(len(Primos) - 1)