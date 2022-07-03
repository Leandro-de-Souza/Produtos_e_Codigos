
codigo = int(input("Codigo do produto comprado: "))
quantidade = int(input("Quantidade comprada: "))

valorApagar = 0

if codigo == 1:
    valorApagar = 5.00 * quantidade
elif codigo == 2:
    valorApagar = 3.50 * quantidade
elif codigo == 3:
    valorApagar = 4.80 * quantidade
elif codigo == 4:
    valorApagar = 8.90 * quantidade
else:
    codigo == 5
    valorApagar = 7.32 * quantidade

print(f"Valor a pagar: R$ {valorApagar:.2f}")
