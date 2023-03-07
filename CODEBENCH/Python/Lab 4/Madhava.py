import math

Pi = 0
Repetir = int(input())

for i in range(Repetir):
    Pi += pow(-3, -i) / (2*i+1)

Pi *= math.sqrt(12)
print(Pi)
