p1 = float(input("Digite a nota da P1: "))
p2 = float(input("Digite a nota da P2: "))
 
m = (p1+(2*p2))/3
 
if (m >= 5):
    print(f"Sua média foi {m:.2f} e você está aprovado!")
else:
    print("Reprovado!")