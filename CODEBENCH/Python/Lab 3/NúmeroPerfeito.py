T = int(input())
Classificacao = []

for i in range(T):

    Num = int(input())
    Soma = 0

    for Divisor in range(1, Num):
        if Num % Divisor == 0:
            Soma += Divisor

    if Num == Soma:
        Classificacao.append("PERFEITO")
    else:
        Classificacao.append("NAO PERFEITO")

print("\n".join(Classificacao))
