#include <stdio.h>

int main() {
    char figura;
    float largura, comprimento, raio, area;
    const float PI = 3.14159;

    printf("Escolha a figura (Q - Quadrado, R - Retangulo, T - Triangulo, C - Circulo): ");
    scanf(" %c", &figura);

    if (figura == 'Q' || figura == 'q') {
        do {
            printf("Digite a largura: ");
            scanf("%f", &largura);
            printf("Digite o comprimento: ");
            scanf("%f", &comprimento);

            if (largura == 0 || comprimento == 0) {
                printf("Valores nao podem ser zero! Tente novamente.\n");
            } else if (largura != comprimento) {
                printf("Para um quadrado, os valores devem ser iguais! Tente novamente.\n");
            }
        } while (largura == 0 || comprimento == 0 || largura != comprimento);

        area = largura * comprimento;
        printf("Area do quadrado: %.2f\n", area);

    } else if (figura == 'R' || figura == 'r') {
        do {
            printf("Digite a largura: ");
            scanf("%f", &largura);
            printf("Digite o comprimento: ");
            scanf("%f", &comprimento);

            if (largura == 0 || comprimento == 0) {
                printf("Valores nao podem ser zero! Tente novamente.\n");
            } else if (largura == comprimento) {
                printf("Para um retangulo, os valores nao podem ser iguais! Tente novamente.\n");
            }
        } while (largura == 0 || comprimento == 0 || largura == comprimento);

        area = largura * comprimento;
        printf("Area do retangulo: %.2f\n", area);

    } else if (figura == 'T' || figura == 't') {
        do {
            printf("Digite a largura (base): ");
            scanf("%f", &largura);
            printf("Digite o comprimento (altura): ");
            scanf("%f", &comprimento);

            if (largura == 0 || comprimento == 0) {
                printf("Valores nao podem ser zero! Tente novamente.\n");
            }
        } while (largura == 0 || comprimento == 0);

        area = (largura * comprimento) / 2;
        printf("Area do triangulo: %.2f\n", area);

    } else if (figura == 'C' || figura == 'c') {
        do {
            printf("Digite o raio: ");
            scanf("%f", &raio);

            if (raio == 0) {
                printf("O valor nao pode ser zero! Tente novamente.\n");
            }
        } while (raio == 0);

        area = PI * raio * raio;
        printf("Area do circulo: %.2f\n", area);

    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
