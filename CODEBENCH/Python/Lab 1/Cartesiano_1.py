X_A = float(input("Insira o valor de A no eixo X: "))
Y_A = float(input("Insira o valor de A no eixo Y: "))
X_B = float(input("Insira o valor de B no eixo X: "))
Y_B = float(input("Insira o valor de B no eixo Y: "))

Distancia = ( (X_B - X_A)**2 + (Y_B - Y_A)**2 )**0.5

print(round(Distancia, 3))
