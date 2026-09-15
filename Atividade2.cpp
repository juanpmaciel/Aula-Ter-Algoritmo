#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura, area, litros_necessarios, custo;
    int latas;

    printf("Digite o raio do cilindro (m): ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro (m): ");
    scanf("%f", &altura);

    area = 3.14 * pow(raio, 2) + 2 * 3.14 * raio * altura;

    litros_necessarios = area / 3;
    latas = (int) ceil(litros_necessarios / 5);

    custo = latas * 20.0;

    printf("\nArea do cilindro: %.2f m2\n", area);
    printf("Litros de tinta necessarios: %.2f L\n", litros_necessarios);
    printf("Quantidade de latas necessarias: %d\n", latas);
    printf("Custo total: R$%.2f\n", custo);

    return 0;
}
