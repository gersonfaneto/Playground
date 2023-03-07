cargaHoraria = eval(input())
cargaDiaria = {1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0, 7: 0}

if len(cargaHoraria) > 1 and len(cargaHoraria[0]) == 7:
    for i in range(len(cargaHoraria)):
        for j in range(len(cargaHoraria[0])):
            cargaDiaria[j + 1] += cargaHoraria[i][j]
    maiorDia = 0
    for dia in cargaDiaria:
        if cargaDiaria[dia] >= maiorDia:
            maiorDia = cargaDiaria[dia]
    for dia in cargaDiaria:
        if cargaDiaria[dia] >= maiorDia:
            print(dia)
