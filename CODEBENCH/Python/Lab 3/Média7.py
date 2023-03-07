Aprovado = [] # N >= 7
Recuperacao = [] # 3 <= N < 7 
Reprovado = [] # N < 3
All = []

for i in range(10):
  N = float(input("Insira a nota do aluno: "))
  All.append(N)
  if N >= 7:
    Aprovado.append(N)
  elif 3 <= N < 7:
    Recuperacao.append(N)
  elif N < 3:
    Reprovado.append(N)

MediaT = sum(All) / len(All)

print(len(Aprovado))
print(len(Recuperacao))
print(len(Reprovado))
print(round(MediaT, 1))