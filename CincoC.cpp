#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include<string.h>
#define M 3
#define N 5

main(){


	setlocale(LC_ALL, "Portuguese");

int i, j;
float Mat[M][N];	
char nome[3][50];
float maior = 0;
float menor = 99999999;
char aluno[50];
float M1;
float M2;
float M3;


//-----------------------Aluno 1-------------------------------------
printf("Digite o nome do primeiro aluno: ");
scanf("%s",nome[0]);

printf("Digite a primeira nota: ");
scanf("%2f",&Mat[0][0]);

printf("Digite a segunda nota: ");
scanf("%2f",&Mat[0][1]);

printf("Digite a terceira nota: ");
scanf("%2f",&Mat[0][2]);

printf("Digite a quarta nota: ");
scanf("%2f",&Mat[0][3]);

M1 = Mat[0][4] =( Mat[0][0] + Mat[0][1] + Mat[0][2] + Mat[0][3])/4;// Calculo Média

system("cls");
//------------------------------------------------------------------

//-----------------------Aluno 2-------------------------------------
printf("Digite o nome do segundo aluno: ");
scanf("%s",nome[1]);

printf("Digite a primeira nota: ");
scanf("%2f",&Mat[1][0]);

printf("Digite a segunda nota: ");
scanf("%2f",&Mat[1][1]);

printf("Digite a terceira nota: ");
scanf("%2f",&Mat[1][2]);

printf("Digite a quarta nota: ");
scanf("%2f",&Mat[1][3]);

M2 = Mat[1][4] =( Mat[1][0] + Mat[1][1] + Mat[1][2] + Mat[1][3])/4;// Calculo Média

system("cls");
//------------------------------------------------------------------

//-----------------------Aluno 3-------------------------------------
printf("Digite o nome do terceiro aluno: ");
scanf("%s",nome[2]);

printf("Digite a primeira nota: ");
scanf("%2f",&Mat[2][0]);

printf("Digite a segunda nota: ");
scanf("%2f",&Mat[2][1]);

printf("Digite a terceira nota: ");
scanf("%2f",&Mat[2][2]);

printf("Digite a quarta nota: ");
scanf("%2f",&Mat[2][3]);

M3 = Mat[2][4] =( Mat[2][0] + Mat[2][1] + Mat[2][2] + Mat[2][3])/4; // Calculo Média
system("cls");
//------------------------------------------------------------------

printf("------------------------------------------------------------------------------------------------------\n");
printf("Alunos\t\tAv1\t\tAv2\t\tAv3\t\tAv4\t\tMÉDIA\n");
printf("------------------------------------------------------------------------------------------------------\n");
for (i = 0; i < M; i++){
	printf("%s:\t\t",nome[i]);
	for(j =0; j < N; j++){
		printf("%.2f",Mat[i][j]);
		
	printf("\t\t");	
	}
	printf("\n\n");
	
	

	}

printf("------------------------------------------------------------------------------------------------------\n");

if (M1 > M2){
	if(M1 > M3){
		printf("\n%s teve a MAIOR média: %f",nome[0], M1);//ok
		printf("\n%s teve a MENOR média: %f", nome[2],M3);//ok
	}
	else{
		printf("\n%s teve a MAIOR média: %f",nome[2], M3);//ok
		printf("\n%s teve a MENOR média: %f",nome[1], M2);//ok
	}
}
else{
	if(M2 >M3){
		if(M2 >M1){
		printf("\n%s teve a MAIOR média: %f", nome[1], M2);//ok
		printf("\n%s teve a MENOR média: %f", nome[0], M1);//ok
		}
	}
	else{
		printf("\n%s teve a MAIOR nota: %f", nome[2], M3);//ok
		printf("\n%s teve a MENOR nota: %f", nome[0], M1);//ok
		
	}
}

printf("\n\n");
	system("Pause");
}

