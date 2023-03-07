Altura_Fachada = float(input("Insira a altura da fachada: "))
Comprimento_Fachada = float(input("Insira o comprimento da fachada: "))
Valor_M = float(input("Insira o valor do servico por metro quadrado: "))
Custo_Total = Altura_Fachada * Comprimento_Fachada * Valor_M

print(round(Custo_Total, 2))