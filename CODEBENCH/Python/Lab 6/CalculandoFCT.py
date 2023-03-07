def calculaFCT(x, y):
    return x + 0.6 * ((220 - y) - x)


idade = int(input())
freqRepouso = int(input())

while idade > 0:
    print("{:.0f}".format(calculaFCT(freqRepouso, idade)))
    idade = int(input())
    freqRepouso = int(input())
