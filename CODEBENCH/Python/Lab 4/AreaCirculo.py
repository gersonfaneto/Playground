Areas = []
R = 1

while R != 0:
  R = float(input("Insira o valor do raio do circulo: "))
  Area = (R**2) * 3.14159
  Area = round(Area, 2)
  if R != 0:
    Areas.append(Area)    

print(*Areas, sep = '\n')