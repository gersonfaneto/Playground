import math

R = float(input("Insira o valor do raio: "))
Area_Circulo = float(math.pi * R**2)
Volume_Esfera = float(4/3) * (math.pi) * (R**3)

print(f"O valor da área do circulo, de raio = {R}, é: {round(Area_Circulo, 2)}")
print(f"O valor do volume da esfera, de raio = {R}, é: {round(Volume_Esfera, 2)}")
