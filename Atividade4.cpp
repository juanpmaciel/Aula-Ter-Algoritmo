#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("O número %d é divisível por 5.\n", n);
    } else {
        printf("O número %d não é divisível por 5.\n", n);
    }

    if (n % 3 == 0) {
        printf("O número %d é divisível por 3.\n", n);
    } else {
        printf("O número %d não é divisível por 3.\n", n);
    }
    return 0;
}