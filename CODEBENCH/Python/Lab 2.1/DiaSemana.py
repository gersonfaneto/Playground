diaAtual = int(input())
diaSemana = ""

if 0 <= diaAtual < 7:
    if diaAtual == 0:
        diaSemana = "domingo"
    elif diaAtual == 1:
        diaSemana = "segunda"
    elif diaAtual == 2:
        diaSemana = "terca"
    elif diaAtual == 3:
        diaSemana = "quarta"
    elif diaAtual == 4:
        diaSemana = "quinta"
    elif diaAtual == 5:
        diaSemana = "sexta"
    else:
        diaSemana = "sabado"

    diasFuturo = int(input())
    diaAtual += diasFuturo
    diaAtual %= 7
    print("Hoje eh {} e o dia futuro eh ".format(diaSemana), end="")

    if diaAtual == 0:
        diaSemana = "domingo"
    elif diaAtual == 1:
        diaSemana = "segunda"
    elif diaAtual == 2:
        diaSemana = "terca"
    elif diaAtual == 3:
        diaSemana = "quarta"
    elif diaAtual == 4:
        diaSemana = "quinta"
    elif diaAtual == 5:
        diaSemana = "sexta"
    else:
        diaSemana = "sabado"

    print(diaSemana)

else:
    print("A entrada {} eh invalida".format(diaAtual))

