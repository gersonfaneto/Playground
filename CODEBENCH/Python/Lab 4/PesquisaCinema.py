Otimo = []
Regular = []
Ruim = []
Nota = 1
Counter = 0

while Nota in (1,2,3):
	Nota = int(input("Digite um nota de 1 a 3, sendo:\n1 - Otimo\n2 - Regular\n3 - Ruim\n"))
	if Nota == 1:
		Otimo.append(Nota)
	elif Nota == 2:
		Regular.append(Nota)
	elif Nota == 3:
		Ruim.append(Nota)
	if Nota in (1,2,3):
		Counter += 1
if Counter > 0:
	P_Otimo = len(Otimo) / Counter * 100
	P_Regular = len(Regular) / Counter * 100
	P_Ruim = len(Ruim) / Counter * 100

	print(Counter)
	print(round(P_Otimo, 1))
	print(round(P_Regular, 1))
	print(round(P_Ruim, 1))
else:
	print(0)
	print(0.0)
	print(0.0)
	print(0.0)
