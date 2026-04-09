def identificar_categoria(valor):
    if valor <= 80000:
        return 1
    elif valor <= 120000:
        return 2
    elif valor <= 140000:
        return 3
    elif valor <= 160000:
        return 4
    elif valor <= 200000:
        return 5
    else:
        return -1

def calcular_valor_final(valor, modalidade):
    if modalidade == 1:
        return valor * 0.90
    elif modalidade == 2:
        entrada = valor * 0.50
        restante = valor - entrada
        return entrada + restante * (1.05 ** 4)
    else:
        entrada = valor * 0.25
        restante = valor - entrada
        return entrada + restante * (1.08 ** 4)

valor = float(input("Digite o valor do veículo: R$ "))

categoria = identificar_categoria(valor)

if categoria == -1:
    print("Valor fora do intervalo permitido.")
else:
    print(f"Categoria do veículo: {categoria}")
    print("Modalidades: 1 - À vista  2 - Entrada 50%  3 - Entrada 25%")

    modalidade = int(input("Escolha a modalidade: "))

    valor_final = calcular_valor_final(valor, modalidade)
    print(f"Valor final a pagar: R$ {valor_final:.2f}")