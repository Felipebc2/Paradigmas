#include <stdio.h>
#include <math.h>

int identificarCategoria(float valor) {
    if (valor <= 80000) return 1;
    else if (valor <= 120000) return 2;
    else if (valor <= 140000) return 3;
    else if (valor <= 160000) return 4;
    else if (valor <= 200000) return 5;
    else return -1;
}

float calcularValorFinal(float valor, int modalidade) {
    if (modalidade == 1) {
        return valor * 0.90;
    } else if (modalidade == 2) {
        float entrada = valor * 0.50;
        float restante = valor - entrada;
        return entrada + restante * pow(1.05, 4);
    } else {
        float entrada = valor * 0.25;
        float restante = valor - entrada;
        return entrada + restante * pow(1.08, 4);
    }
}

int main() {
    float valor;
    int modalidade, categoria;

    printf("Digite o valor do veiculo: R$ ");
    scanf("%f", &valor);

    categoria = identificarCategoria(valor);

    if (categoria == -1) {
        printf("Valor fora do intervalo permitido.\n");
        return 1;
    }

    printf("Categoria do veiculo: %d\n", categoria);
    printf("Modalidades: 1 - A vista  2 - Entrada 50%%  3 - Entrada 25%%\n");
    printf("Escolha a modalidade: ");
    scanf("%d", &modalidade);

    float valorFinal = calcularValorFinal(valor, modalidade);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}