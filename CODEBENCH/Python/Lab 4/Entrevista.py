engenharia = computacao = matematica = 0
entreVinteEVinteCincoAnos = 0
idadeEngenharia = idadeComputacao = idadeMatematica = menorMedia = 0
idade
alunoMaisVelho = cursoAlunoMaisVelho = 0
curso = int(input())
idade = int(input())
  
while curso in (1, 2, 3) and 0 <= idade <= 100:
    if curso == 1:
        engenharia += 1
    elif curso == 2:
        computacao += 1
    else:
        matematica += 1

    if 20 <= idade <= 25:
        entreVinteEVinteCincoAnos += 1

    if curso == 1 and idade >= idade:
        alunoMaisVelho = idade
        cursoAlunoMaisVelho = curso
    elif curso == 2 and idade >= idade:
        alunoMaisVelho = idade
        cursoAlunoMaisVelho = curso
    else:
        alunoMaisVelho = idade
        cursoAlunoMaisVelho = curso

    curso = int(input())
    idade = int(input())


if engenharia > 0 and computacao > 0 and matematica > 0:
    idadeEngenharia /= engenharia
    idadeComputacao /= computacao
    idadeMatematica /= matematica

    if idadeEngenharia < idadeComputacao and idadeEngenharia < idadeMatematica:
        menorMedia = 1
    elif idadeComputacao < idadeEngenharia and idadeComputacao < idadeMatematica:
        menorMedia = 2
    else:
        menorMedia = 3


print("{}\n{}\n{}".format(engenharia, computacao, matematica)) # Alunos por curso.
print("{}".format(entreVinteEVinteCincoAnos)) # Idade entre 20 e 25 anos.
print("{}\n{}".format(cursoAlunoMaisVelho, alunoMaisVelho)) # Curso com aluno mais velho e sua idade.
print("{}".format(menorMedia))




