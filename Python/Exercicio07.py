val1 = float(input("Digite o valor do produto 1: "))
val2 = float(input("Digite o valor do produto 2: "))
val3 = float(input("Digite o valor do produto 3: "))
val4 = float(input("Digite o valor do produto 4: "))
val5 = float(input("Digite o valor do produto 5: "))

pag = float(input("Digite o valor do pagamento realizado: "))
soma = val1+val2+val3+val4+val5
troco = pag - soma
 
print(f"O troco a ser recebido é: {troco:.2f}")