#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("O numero %d eh divisivel por 5.\n", n);
    } else {
        printf("O numero %d nao eh divisivel por 5.\n", n);
    }

    if (n % 3 == 0) {
        printf("O numero %d eh divisivel por 3.\n", n);
    } else {
        printf("O numero %d nao eh divisivel por 3.\n", n);
    }
    return 0;
}
