import sys

def potenciaEficitente(Base, Expoente):
    if Expoente == 0:
        return 1
    if Expoente % 2 != 0:
        return Base * potenciaEficitente(Base, Expoente - 1)
    else:
        return potenciaEficitente(Base, Expoente // 2) * potenciaEficitente(Base, Expoente // 2)

if __name__ == '__main__':
    Resultados = []
    for line in sys.stdin:
        base, expoente = map(int, line.rstrip("\n").split("**"))
        Resultados.append(potenciaEficitente(base, expoente))
    for valor in Resultados:
        print(valor)

