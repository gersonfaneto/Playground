from math import *

x = eval(input(""))
k = int(input())

for i in range(k):
    seno += x - (x**((2*i)+1)/factorial((2*i)+1))

print(round(seno, 10))

