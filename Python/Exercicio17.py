A = int(input("Digite o valor A (primeiro cateto):"))
B = int(input("Digite o valor B (segundo cateto):"))
C = int(input("Digite o valor C (hipotenusa):"))

if ((A*A)+(B*B)==(C*C)):
    print("Este e um triangulo retangulo")
else:
    print("Este triangulo nao e retangulo")