#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[11];
    char consoantes[11];
    int i, qtd = 0;

    printf("Digite uma palavra (max 10 caracteres): ");
    scanf("%10s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        char c = tolower(palavra[i]);

        if (isalpha(c) && c != 'a' && c != 'e' &&
            c != 'i' && c != 'o' && c != 'u') {
            consoantes[qtd] = palavra[i];
            qtd++;
        }
    }
    consoantes[qtd] = '\0';

    printf("Consoantes lidas: %d\n", qtd);
    printf("Consoantes: %s\n", consoantes);

    return 0;
}
