#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n[5];
	
	for (i = 1; i <= 5; i++){
		printf("\nDigite o valor da %i° posição do vetor: ",i);
		scanf("%i",&n[i]);
		
	}
	printf("\n\nVetor = {\t\t");
	for (i = 1; i <= 5; i++){
		printf("%i\t\t",n[i]);
	}
	printf("}\n\n");
	
	printf("Valor da 3° posição do vetor: %i\n\n", n[3]);
	system("Pause");
}



