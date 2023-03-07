import math

LifePoints = float(input("Insira os pontos de vida do monstro: "))
D1 = int(input("Insira o valor tirado em D1: "))
D2 = int(input("Insira o valor tirado em D2: "))
Damage = ((5*D1) ** 0.5) + (math.pi ** (D2/3)) 
LifePoints_R = LifePoints - int(Damage)

print(int(LifePoints_R))
