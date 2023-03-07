Comprimento = float(12)
Altura = float(3)
Material = 100
Serviço = float(input("Insira o valor do servico por metro quadrado: "))
Total = (Comprimento * Altura * Serviço) + Material 

print(f"O valor total é: {round(Total, 2)}")