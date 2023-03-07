def quantidadeRaies(a, b, c):
    delta = (b**2) - (4*a*c)
    if delta > 0:
        return "existem duas raizes reais"
    elif delta < 0:
        return "nao existem raizes reais"
    else:
        return "existe uma unica raiz"


valorA = int(input())
valorB = int(input())
valorC = int(input())

print(quantidadeRaies(valorA, valorB, valorC))