num1=1
num2=1

print("Os primeiros 30 numeros da sequencia de Fibonacci sao: ")
print("", num1, "\n", num2)

for i in range (2, 30, 1):
    soma=num1+num2 
    print("", soma)
    num1=num2
    num2=soma