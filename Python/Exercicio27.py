num = int(input("Digite um numero para tabuada: "))

while(num <= 0):
    num = int(input("Erro! O numero digitado é negativo. Insira um valor positivo: "))

intervalo = int(input("Digite o intervalo da tabuada a ser exibida: "))

for i in range(1, intervalo+1, 1):
    r = num*i
    print(f"{num} X {i} = {r}")