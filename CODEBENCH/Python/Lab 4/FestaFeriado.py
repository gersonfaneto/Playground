praia = hotel = churrasco = feijoada = massa = sabado = domingo = 0
continuar = True

while continuar:
    local = input()
    comida = input()
    dia = input()

    if local[0].lower() == "p":
        praia += 1
    else:
        hotel += 1

    if comida[0].lower() == "c":
        churrasco += 1
    elif comida[0].lower() == "f":
        feijoada += 1
    else:
        massa += 1

    if dia[0].lower() == "s":
        sabado += 1
    else:
        domingo += 1

    continuar = input()[0].lower() == "s"

if praia > hotel:
    print("p")
else:
    print("h")

if churrasco > feijoada and churrasco > massa:
    print("c")
elif feijoada > churrasco and feijoada > massa:
    print("f")
else:
    print("m")

if sabado > domingo:
    print("s")
else:
    print("d")