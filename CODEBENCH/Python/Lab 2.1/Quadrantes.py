x = float(input())
y = float(input())

if x == 0 and y != 0:
    print("Eixo Y")
elif y == 0 and x != 0:
    print("Eixo X")
elif x == 0 and y == 0:
    print("Origem")
else:
    if y > 0 and x > 0:
        print("Q1")
    elif y > 0 and x < 0:
        print("Q2")
    elif y < 0 and x < 0:
        print("Q3")
    else:
        print("Q4")