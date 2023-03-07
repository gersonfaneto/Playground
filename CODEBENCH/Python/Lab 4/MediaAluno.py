Situacao = []
Media = 0

while 0 <= Media <= 10:
  Media = float(input("Insira a media do aluno:\n"))
  if Media >= 7:
    Situacao.append("APROVADO")
  elif 3 <= Media < 7:
    Situacao.append("FINAL")
  elif 0 <= Media < 3:
    Situacao.append("REPROVADO")

print(*Situacao, sep="\n")
