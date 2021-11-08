val1 = int(input("Digite o primeiro valor: "))
val2 = int(input("Digite o segundo valor: "))
val3 = int(input("Digite o terceiro valor: "))

if (val1>val2) and (val1>val3):
    print("O maior valor é:", val1)
if (val2>val1) and (val2>val3):
    print("O maior valor é:", val2)
if (val3>val1) and (val3>val2):
    print("O maior valor é:", val3)