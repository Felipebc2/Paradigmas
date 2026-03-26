#include <stdio.h>
#include <math.h>

double fatorial(int n) {
    double fat = 1.0;

    for (int i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

double exponencial_aproximada(double x, int n) {
    double soma = 0.0;

    for (int i = 0; i <= n; i++) {
        soma += pow(x, i) / fatorial(i);
    }

    return soma;
}

int main() {
    double x, resultado;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    resultado = exponencial_aproximada(x, n);

    printf("A aproximacao de e^%.2lf com %d termos e: %.6lf\n", x, n, resultado);

    return 0;
}