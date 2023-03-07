N = int(input("Insira um numero: "))
  
for i in range(0, N + 1): 
  if i > 1: 
    for Num in range(2, i): 
        if (i % Num) == 0: 
            break
    else: 
        print(i) 