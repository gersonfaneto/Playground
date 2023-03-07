Meses = ["Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho",\
         "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"]
Temperaturas = []

for i in range(len(Meses)):
    temperatura = eval(input())
    Temperaturas.append(temperatura)
mediaAnual = sum(Temperaturas) / 12

for i in range(len(Meses)):
    if Temperaturas[i] > mediaAnual:
        print("{} => {}".format(Temperaturas[i], Meses[i]))
