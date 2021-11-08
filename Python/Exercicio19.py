aceleracao = float(input("Digite o valor da aceleracao:"))
velocidadeinicial = float(input("Digite o valor da velocidade inicial:"))
tempo = float(input("Digite o valor do tempo de percurso: "))

velocidade = velocidadeinicial+(aceleracao*tempo)

print(f"A velocidade final do automovel é: {velocidade:.1f}")

if (velocidade <= 40):
    print("Veiculo muito lento")
elif (velocidade <= 60):
    print("Velocidade permitida")
elif (velocidade <= 80):
    print("Velocidade de cruzeiro")
elif (velocidade <= 120):
    print("Veiculo rapido")
elif (velocidade > 120):
    print("Veiculo muito rapido")