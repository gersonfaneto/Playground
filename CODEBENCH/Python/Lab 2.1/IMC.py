idade = int(input())
imc = float(input())
risco = ""

if 0 < idade <= 130 and imc > 0:

    if imc < 22 and idade < 45:
        risco = "Baixo"
    elif imc < 22 and idade >= 45:
        risco = "Medio"
    elif imc >= 22 and idade < 45:
        risco = "Medio"
    else:
        risco = "Alto"
    print("Entradas: {} anos e IMC {}".format(idade, imc))
    print("Risco: {}".format(risco))

else:
    print("Entradas: {} anos e IMC {}".format(idade, imc))
    print("Dados invalidos")