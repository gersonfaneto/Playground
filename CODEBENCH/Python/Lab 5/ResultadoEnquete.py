voto = int(input())
Sistemas = ["Windows Server", "Unix", "Linux", "Netware", "Mac OS", "Outro"]
Votos = [0, 0, 0, 0, 0, 0]

while voto != 0:
    Votos[voto - 1] += 1
    voto = int(input())

for i in range(len(Sistemas)):
    print("{} {} {:.0f}% ".format(Sistemas[i], Votos[i], ((Votos[i]/sum(Votos)) * 100)))

print("Total", sum(Votos), "votos")

maisVotado = Votos.index(max(Votos))
print("O Sistema Operacional mais votado foi o {}, com {} votos, correspondendo a "
      "{:.0f}% dos votos.".format(Sistemas[maisVotado], Votos[maisVotado], ((Votos[maisVotado]/sum(Votos)) * 100)))
