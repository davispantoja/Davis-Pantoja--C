#include <stdlib.h>
#include <stdio.h>
#include <locale.h>>
#include <math.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");

int maior = 0;
int menor = 100000000;
int n;

for(int i = 0; i < 5; i++){
	printf("Informe %d ° valor: ", i+1);
	scanf("%d", &n);
	
	if(menor>n){
		menor = n;
	}
	if(maior<n){
		maior = n;
	}
}
printf("\n\n");
printf("Maior valor: %d", maior);
printf("\nMenor valor: %d", menor);
printf("\n\n");
system("Pause");	
}
