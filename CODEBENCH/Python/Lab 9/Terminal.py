from collections import deque

tempoMaximo = int(input())
tempoAlunos = deque(map(int, input().split(",")))

tempoTotal = 0
while tempoAlunos:
    if len(tempoAlunos) != 1:
        tempoRemovido = tempoAlunos.popleft()
        if tempoRemovido <= tempoMaximo:
            tempoTotal += tempoMaximo
        else:
            tempoRestante = tempoRemovido - tempoMaximo
            tempoTotal += tempoMaximo
            tempoAlunos.append(tempoRestante)
    else:
        tempoTotal += tempoAlunos.popleft()
print(tempoTotal)

