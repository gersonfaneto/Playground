def fibonacci(n):
    seq = [0, 1]
    if n == 0:
        return seq[0]
    elif n == 1:
        return seq[1]
    else:
        for i in range(2, n+1):
            termo = seq[i-2] + seq[i-1]
            seq.insert(i, termo)
        return seq[n]


enesimo = int(input())
while enesimo > 0:
    print(fibonacci(enesimo))
    enesimo = int(input())
