#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<string.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int resp;
	char nome[40];
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float med;
	
	do{
	printf("\n\n___________________________________________________________________________________________________\n");
	printf("Digite o nome de um aluno: ");
	scanf("%s",nome);

	printf("\n Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("\n Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("\n Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("\n Digite a Quarta nota: ");
	scanf("%f",&nota4);

	printf("\n\n");
	
	med = (nota1 + nota2 + nota3 + nota4)/4;
	
	printf("\n___________________________________________________________________________________________________\n");
	
	if(med < 6){
		printf("Nome do Aluno: %s ", nome);
		printf("\n\nMédia: %.2f",med);
		printf("\n\nSituação: REPROVADO!");
	}
	else{
		printf("Nome do Aluno: %s ", nome);
		printf("\n\nMédia: %.2f",med);
		printf("\n\nSituação: APROVADO!");
	}
	
	printf("\n___________________________________________________________________________________________________\n\n");
	
	printf("Digite 1 para continuar ou outro valor para sair: ");
	scanf("%i", &resp); 
	system("cls");
	
	} while (resp == 1);
	
	
	system("Pause");
}

