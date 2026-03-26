#include <stdio.h>

int main() {
    float p1, p2, atividades, media;

    for (int i = 0; i <= 3; i++) {
        printf("\n=== Aluno %d ===\n", i + 1);

        printf("Digite a nota da P1: ");
        scanf("%f", &p1);
        printf("Digite a nota da P2: ");
        scanf("%f", &p2);
        printf("Digite a nota das atividades: ");
        scanf("%f", &atividades);

        media = (p1 * 0.3) + (p2 * 0.3) + (atividades * 0.4);

        printf("Media final: %.2f\n", media);

        if (media >= 9.0 && media <= 10.0) {
            printf("Mencao: SS - Superior\n");
            printf("Situacao: Aprovado\n");
        } 
        else if (media >= 7.0 && media < 9.0) {
            printf("Mencao: MS - Medio Superior\n");
            printf("Situacao: Aprovado\n");
        } 
        else if (media >= 5.0 && media < 7.0) {
            printf("Mencao: MM - Medio\n");
            printf("Situacao: Aprovado\n");
        } 
        else if (media >= 3.0 && media < 5.0) {
            printf("Mencao: MI - Medio Inferior\n");
            printf("Situacao: Reprovado\n");
        } 
        else if (media > 0.0 && media < 3.0) {
            printf("Mencao: II - Inferior\n");
            printf("Situacao: Reprovado\n");
        } 
        else if (media == 0.0) {
            printf("Mencao: SR - Sem Rendimento\n");
            printf("Situacao: Reprovado\n");
        } 
        else {
            printf("Nota invalida!\n");
        }
    }

    return 0;
}