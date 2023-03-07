# frase = input().replace(" ", "")
# consoantes = []
# nConsoantes = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U", "_", ",", ".", "!", "?"]
#
# for i in range(len(frase)):
#     if frase[i] not in nConsoantes:
#         consoantes.append(frase[i])
#
# print(len(consoantes))
# for i in range(len(consoantes)):
#     print(consoantes[i], end="")

import re

frase = input().replace(" ", "")
consoantes = re.findall("[^aeiouAEIOU_,.!?]", frase)

print(len(consoantes))
for i in range(len(consoantes)):
    print(consoantes[i], end="")

