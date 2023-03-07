Tempo = int(input("Insira a quantidade de tempo em segundos: "))
Horas = Tempo // 3600
Segundos_R = Tempo % 3600
Minutos = Segundos_R // 60
Segundos = Segundos_R % 60 

if 1 <= Tempo <= 100000000:
  print("{}h {}m {}s".format(Horas, Minutos, Segundos))
