#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i, numero;
	for (i= 1; i<=5; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);
		if (numero % 5 ==0){
			printf("O numero %d eh divisivel por 5.\n", numero);
		}
		else {
			printf("O numero %d nao eh divisivel por 5.\n", numero);
		}
		
		if (numero % 3 ==0){
			printf("O numero %d eh divisivel por 3.\n", numero);
		}
		else {
			printf("O numero %d nao eh divisivel por 3.\n", numero);
		}
	}
		return 0;
}
