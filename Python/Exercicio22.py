valor = int(input("Digite um valor positivo: "))

while (valor < 0):
    print("Erro! O valor digitado não é positivo. Digite novamente.")
    valor = int(input("Digite um valor positivo: "))

if (valor>=0):
    print("O valor é positivo!")