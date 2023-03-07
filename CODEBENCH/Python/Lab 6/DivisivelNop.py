def verificaDivisao(a, b):
    return a % b == 0


num1 = int(input())
num2 = int(input())

while num2 != 0:

    if num2 != 0:
        print("DIVISIVEL" if verificaDivisao(num1, num2) else "nop")

    num1 = int(input())
    num2 = int(input())
