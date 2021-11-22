numeros = []

qtd = int(input("Digite a quantidade de valores: "))
while qtd <= 0 or qtd > 20:
    qtd = int(input("\nErro! A quantidade deve ser entre 0 e 20. Digite uma nova quantidade: "))

for i in range(0, qtd, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)

leitura = (input("Digite um valor definido anteriormente: "))

for numero in numeros:
    if numero == leitura:
        print("O numero digitado esta na posicao:", numero)