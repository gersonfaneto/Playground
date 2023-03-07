def somaPares(x, y):
    soma = 0
    for i in range(x, y+1):
        if i % 2 == 0:
            soma += i
    return soma


num1 = int(input())
num2 = int(input())

while num2 > num1:
    print(somaPares(num1, num2))

    num1 = int(input())
    num2 = int(input())

