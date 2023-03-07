Valor_Saque = int(input("Digite o valor que deseja sacar: "))
Notas_50 = Valor_Saque // 50
Notas_10 = (Valor_Saque % 50) // 10
Notas_2 = (Valor_Saque % 50) % 10 // 2

print(f"R$\t50 = {Notas_50} Nota(s)\nR$\t10 = {Notas_10} Nota(s)\nR$\t2 = {Notas_2} Nota(s)")