def coletarNotacoes(nNotacoes):
    ListaNotacoes = []
    for i in range(nNotacoes):
        Notacao = input().split(",")
        Notacao.pop(-1)
        ListaNotacoes.append(Notacao)
    return ListaNotacoes

def resolverNotacoes(ListaNotacoes):
    ListaResultados = []
    for Notacao in ListaNotacoes:
        while len(Notacao) != 1:
            if Notacao[0].isnumeric():
                Notacao.append(Notacao.pop(0))
            else:
                operando2, operando1, operador = Notacao.pop(), Notacao.pop(), Notacao.pop(0)
                operando1, operando2 = float(operando1), float(operando2)
                if operador == "#":
                    resultado = operando1 + operando2
                elif operador == "-":
                    resultado = operando1 - operando2
                elif operador == "*":
                    resultado = operando1 * operando2
                else:
                    resultado = operando1 / operando2
                Notacao.append(resultado)
        ListaResultados.append(Notacao.pop())
    return ListaResultados

def main():
    quantNotacoes = int(input())
    ListaNotacoes = coletarNotacoes(quantNotacoes)
    ListaResultados = resolverNotacoes(ListaNotacoes)
    for valor in ListaResultados:
        print(f"{valor:.2f}")

if __name__ == "__main__":
    main()

