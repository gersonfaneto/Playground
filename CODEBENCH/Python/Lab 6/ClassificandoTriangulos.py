def verificarTriangulo(a, b, c):
    return a < b + c and b < a + c and c < a + b

def tipoTriangulo(a, b, c):
    if a**2 == b**2 + c**2 or b**2 == c**2 + a**2 or c**2 == b**2 + a**2:
        return "retangulo"
    elif a**2 > b**2 + c**2 or b**2 > c**2 + a**2 or c**2 > b**2 + a**2:
        return "obtusangulo"
    else:
        return "acutangulo"


ladoA = float(input())
ladoB = float(input())
ladoC = float(input())
while ladoA > 0 and ladoB > 0 and ladoC > 0:
    print(tipoTriangulo(ladoA, ladoB, ladoC) if verificarTriangulo(ladoA, ladoB, ladoC) else "not a triangle")
    ladoA = float(input())
    ladoB = float(input())
    ladoC = float(input())
