import sys

def EuclidesRecursivo(nA, nB):
    if nA == nB:
        return nA
    if nA > nB:
        return EuclidesRecursivo(nA-nB, nB)
    if nB > nA:
        return EuclidesRecursivo(nA, nB - nA)

def main():
    MDC = []
    for line in sys.stdin:
        nA, nB = map(int, line.rstrip("\n").split(","))
        MDC.append(EuclidesRecursivo(nA, nB))
    for valor in MDC:
        print(valor)

if __name__ == '__main__':
    main()
