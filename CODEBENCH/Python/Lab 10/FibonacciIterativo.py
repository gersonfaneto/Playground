def fibonacci(n):
    print("fib(0) = 0")
    print("fib(1) = 1")
    print("fib(2) = 1")
    ultimo = 1
    penultimo = 1
    for i in range(3, n):
        atual = ultimo + penultimo
        penultimo = ultimo
        ultimo = atual
        print("fib({}) = {}".format(i, atual))

def main():
    fibonacci(47)

if __name__ == '__main__':
    main()
