numeros = []
vetor2 = []

for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)

mult = int(input("Digite a constante multiplicativa: "))

for i in range(0, 20, 1):
    print("O valor de", numeros[i], "vezes", mult, "é:")
    numeros[i] = numeros[i]*mult
    vetor2.append(numeros[i])
    print(vetor2[i])