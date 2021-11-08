alt = float(input('Digite a sua altura em (m): '))
peso = float(input('Digite o seu peso (em Kg): '))

sexo = input("Digite o sexo (F/M): ")

imc = peso / (alt * alt)

if sexo == 'F':
    if imc < 19:
        print("Abaixo do peso!")
    elif imc < 24:
        print("Peso ideal!")
    else:
        print("Acima do peso!")

if sexo == 'M':
    if imc < 20:
        print("Abaixo do peso!")
    elif imc < 25:
        print("Peso ideal!")
    else:
        print("Acima do peso!")