consumo = float(input())
tipoInstalacao = input()

tipoIndustrialL1 = (consumo * 0.55)
tipoIndustrialL2 = (consumo * 0.60)
tipoComercialL1 = (consumo * 0.55)
tipoComercialL2 = (consumo * 0.60)
tipoResidencialL1 = (consumo * 0.44)
tipoResidencialL2 = (consumo * 0.65)

if consumo > 0 and tipoInstalacao.lower() in "icr":
    if tipoInstalacao.lower() == "i" and consumo <= 5000:
        print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
        print("Valor total: R$ {:.2f}".format(tipoIndustrialL1))
    elif tipoInstalacao.lower() == "i" and consumo > 5000:
        print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
        print("Valor total: R$ {:.2f}".format(tipoIndustrialL2))
    elif tipoInstalacao.lower() == "c" and consumo <= 1000:
        print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
        print("Valor total: R$ {:.2f}".format(tipoComercialL1))
    elif tipoInstalacao.lower() == "c" and consumo > 1000:
        print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
        print("Valor total: R$ {:.2f}".format(tipoComercialL2))
    elif tipoInstalacao.lower() == "r" and consumo <= 500:
        print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
        print("Valor total: R$ {:.2f}".format(tipoResidencialL1))
    elif tipoInstalacao.lower() == "r" and consumo > 500:
        print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
        print("Valor total: R$ {:.2f}".format(tipoResidencialL2))
else:
    print("Entradas: {} kWh e tipo {}".format(consumo, tipoInstalacao.upper()))
    print("Dados invalidos")