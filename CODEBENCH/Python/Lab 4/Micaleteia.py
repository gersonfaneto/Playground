QIVirus = int(input("Insira a quantidade incial de copias do virus: "))
QILeucocitos = int(input("Insira a quantidade incial de leucocitos: "))  
PMVirus = int(input("Insira o percentual de multiplicação do virus: "))
PMLeucocitos = int(input("Insira o percentual de multiplicação dos leucocitos: "))

PMVirus = PMVirus / 100
PMLeucocitos = PMLeucocitos / 100

CVirus = QIVirus * (1 + PMVirus)
CLeucocitos = QILeucocitos * (1 + PMLeucocitos)
Dias = 1

while not CLeucocitos > CVirus * 2:
  CVirus = CVirus * (1 + PMVirus)
  CLeucocitos = CLeucocitos * (1 + PMLeucocitos)
  Dias += 1

print(Dias)

