#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
	
	float altura, pesoideal;
	char sexo;	
		
		printf("Digite sua altura (ex. 1.80): ");
		scanf("%f", &altura);
		
		while (altura != 0) {
			
		printf("Digite seu sexo (M/F): ");
		scanf(" %c", &sexo);
		
		sexo = toupper(sexo);
		
		if (sexo == 'M'){
			pesoideal = (72.2*altura) - 58;
			printf("\nO sexo digitado foi %c e o peso ideal eh %.2f quilos\n", sexo, pesoideal);
		}
	
		else if (sexo == 'F'){
			pesoideal = (62.1*altura) - 44.7;
			printf("\nO sexo digitado foi %c e o peso ideal eh %.2f quilos\n", sexo, pesoideal);
		}
		else {
			printf("\nO sexo digitado %c eh invalido\n", sexo);
		}
		
		printf("Digite sua altura: ");
		scanf("%f", &altura);
	}
	return 0;

}
