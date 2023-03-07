aprovados = todos = 0
nota = float(input())

while 0 <= nota <= 10:
    if nota >= 7:
        aprovados += 1
        todos += 1
    else:
        todos += 1
    nota = float(input())

if todos > 0:
    porcentagem = (aprovados / todos) * 100
    print(aprovados)
    print(round(porcentagem, 1))
else:
    print(0)
    print(0.0)
