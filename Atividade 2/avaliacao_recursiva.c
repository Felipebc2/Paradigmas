#include <stdio.h>

void processarAlunos(int aluno) {
    float p1, p2, atividades, media;

    if (aluno > 4) {
        return;
    }

    printf("\n=== Aluno %d ===\n", aluno);

    printf("Digite a nota da Prova 1: ");
    scanf("%f", &p1);

    printf("Digite a nota da Prova 2: ");
    scanf("%f", &p2);

    printf("Digite a nota das Atividades: ");
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

    processarAlunos(aluno + 1);
}

int main() {
    processarAlunos(1);
    return 0;
}