sexo = (input("Digite o sexo (F/M): "))

while sexo != 'F' and sexo != 'M':
    sexo = (input("Erro! Digite M ou F: "))

if sexo == 'F' or sexo == 'M':
    print("Sexo", sexo, "digitado!")