Filmes = {}
for i in range(10):
    titulo = input()
    duracao = int(input())
    Filmes[titulo] = duracao

duracaoTotal = 0
for i in range(3):
    tituloEscolhido = input()
    duracaoTotal += Filmes[tituloEscolhido]

print(duracaoTotal)
