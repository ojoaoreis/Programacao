soma = 0

qtd = int(input("\nDigite a quantidade de valores da sequencia a serem somados: "))

while qtd <= 0 or qtd > 99:
    qtd = int(input("\nErro! A quantidade deve ser positiva e menor que 100. Digite uma nova quantidade: "))

for i in range (1, qtd+1, 1):
    seq = (i*i)+1
    soma = soma + seq

print("\nA soma de", qtd, "valores da sequencia e:", soma)