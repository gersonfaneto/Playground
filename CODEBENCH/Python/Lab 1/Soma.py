Num = int(input("Digite um número de 4 dígitos: "))
M = Num % 10
C = Num % 100 // 10
D = Num % 1000 // 100 
U = Num % 10000 // 1000
Soma = M+C+D+U

print(Soma)