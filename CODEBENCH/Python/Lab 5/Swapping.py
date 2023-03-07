tamanho = eval(input())
Lista = eval(input())
n1 = eval(input())
n2 = eval(input())

if n1 and n2 in Lista:
    p1 = Lista.index(n1)
    p2 = Lista.index(n2)

    Lista[p1], Lista[p2] = Lista[p2], Lista[p1]

    print("swap succeded:", Lista)

else:
    print("elements not found")
