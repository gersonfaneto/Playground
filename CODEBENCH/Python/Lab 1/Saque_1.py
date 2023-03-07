Valor_Saque = int(input("Digite o valor que deseja sacar: "))
Notas_100 = Valor_Saque // 100
Notas_50 = (Valor_Saque % 100) // 50
Notas_10 = (Valor_Saque % 100) % 50 // 10

print(f"R$\t100 = {Notas_100} Nota(s)\nR$\t50 = {Notas_50} Nota(s)\nR$\t10 = {Notas_10} Nota(s)")