#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable: 4996)

int main()
{
	char nome[35];
	int idd, tel;
	printf("Introduza o seu nome:\n");
	fflush(stdin);
	scanf("%s", &nome);
	printf("Introduza a sua idade:\n");
	scanf("%i", &idd);
	printf("Introduza o seu numero de telemovel:\n");
	scanf("%i", &tel);
	printf("REGISTADO: \t %s %i anos, n%i", nome, idd, tel);
	system("pause");



}