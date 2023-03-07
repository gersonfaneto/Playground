def organizarTorre(nDiscos, Origem, Destino, Auxiliar):
    if nDiscos >= 1:
        organizarTorre(nDiscos - 1, Origem, Auxiliar, Destino)
        print(f"{Origem} -> {Destino}")
        organizarTorre(nDiscos - 1, Auxiliar, Destino, Origem)

if __name__ == '__main__':
    n = int(input())
    organizarTorre(n, "1", "3", "2")
