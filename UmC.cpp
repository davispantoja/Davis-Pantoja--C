#include <stdlib.h>
#include <stdio.h>
#include <locale.h>>
main(){
	
	setlocale(LC_ALL, "Portuguese");

int i, num[5];
float contS = 0;

//Informar os valores!
printf("--------------------------------------------------\n");
printf("Informe os valores a seguir!\n");
printf("--------------------------------------------------\n");
for(i=1; i<=5; i++){
	printf("Digite o %i° valor:",i);
	scanf("%i",&num[i]);
}
printf("--------------------------------------------------\n");
printf("\n\n");
//////////////////////////////////////////////////


//Imprimi numeros pares!
printf("--------------------------------------------------\n");
printf("Os numeros pares são:\n");
printf("--------------------------------------------------\n");
for (i=1; i<=5; i++){
	if(num[i] % 2 == 0){
		printf("%i\n", num[i]);
	}
}
printf("--------------------------------------------------\n");
printf("\n\n");
//////////////////////////////////////////////////


//Imprimi numeros impares!
printf("--------------------------------------------------\n");
printf("Os numeros impares são: \n");
printf("--------------------------------------------------\n");
for (i=1; i<=5; i++){
	if(num[i] % 2 != 0){
		printf("%i\n", num[i]);
	}
}
printf("--------------------------------------------------\n");
printf("\n\n");
//////////////////////////////////////////////////


for (i=1; i<=5; i++){
	contS = num[i] + contS;
}
printf("--------------------------------------------------\n");
printf("A média dos valores é igual: %f",contS/5);
printf("\n");
printf("--------------------------------------------------\n");
printf("\n\n");
system ("Pause");
}
