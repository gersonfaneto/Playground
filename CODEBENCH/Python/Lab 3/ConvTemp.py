N = int(input("Digite a primeira temperatura: "))
M = int(input("Agora a segunda: "))

if N < M:
  for F in range(N, M+1):
    C = (F - 32) * (5/9)
    print("{} {:.1f}".format(F, C))

else:
  for F in range(N, M-1, -1):
    C = (F - 32) * (5/9)
    print("{} {:.1f}".format(F, C))