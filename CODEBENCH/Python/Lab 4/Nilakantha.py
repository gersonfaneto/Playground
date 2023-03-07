Multiplicador = 1.0
Denominador = 2.0
Pi = 3.0
Interacao = 0

Interacao = int(input())

for i in range(1, Interacao):
    Pi += ( (4.0 / (Denominador * (Denominador + 1.0) * (Denominador + 2.0)) ) * Multiplicador)
    Denominador += 2.0
    Multiplicador *= -1.0

print(round(Pi, 4))