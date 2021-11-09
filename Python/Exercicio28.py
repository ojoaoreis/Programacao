num = 1

for j in range(1, 21, 1):
    for i in range (1, 11, 1):
        tabuada = num*i
        print(f"{num} X {i} = {tabuada}")
    num = num+1
    if j == 20:
        break
    input("\nPara iniciar a proxima tabuada digite Enter\n")
    continue