num1=1
num2=1
num3=1
  
print("\nOs primeiros 20 numeros da sequencia de Bergamaschi sao: ")
print("\n", num1, "\n", num2, "\n", num3)

for i in range (3, 20, 1):
    soma=num1+num2+num3   
    print("",soma)    
    num1=num2
    num2=num3
    num3=soma