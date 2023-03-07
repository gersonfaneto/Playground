def ordenarNumeros():
    Saida = []
    for i in range(3):
        num = int(input())
        for chave, valor in enumerate(Saida):
            if num < valor:
                Saida.insert(chave, num)
                break
        else:
            Saida.append(num)
    return Saida


print(*ordenarNumeros())
