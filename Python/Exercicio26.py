num = int(input("Digite um numero para tabuada: "))

while(num <= 0):
    num = int(input("Erro! O numero digitado é negativo. Insira um valor positivo: "))
 
for i in range(1, 11, 1):
    r = num*i
    print(f"{num} X {i} = {r}")