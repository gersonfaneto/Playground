Positives = []
Negatives = []
All = []

for i in range(10):
  Num = float(input("Digite um numero: "))
  All.append(Num)
  if Num > 0:
    Positives.append(Num)
  else:
    Negatives.append(Num)

SumNeg = sum(Negatives)
QuantPos = len(Positives)
Average = sum(All) / len(All)

print(QuantPos)
print(round(SumNeg, 1))
print(round(Average, 1))