def criarAgenda():
    Agenda, Nome, Num = {}, [], []
    for i in range(30):
        info = input()
        if i % 2 == 0:
            Nome.append(info)
        else:
            Num.append(info)
    for chave, valor in zip(Nome, Num):
        Agenda[chave] = valor
    return Agenda

def buscarContato(numeroTelefone, Agenda):
    for chave in Agenda.keys():
        if Agenda[chave] == numeroTelefone:
            return chave
    return -1

def main():
    Agenda = criarAgenda()
    numeroTelefone = input()
    resultadoBusca = buscarContato(numeroTelefone, Agenda)
    print(resultadoBusca)

if __name__ == '__main__':
    main()
