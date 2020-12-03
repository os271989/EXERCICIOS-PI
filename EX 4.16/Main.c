/*****************************************************************//**
 * \file       Main.c
 * \brief      4.16 -Solicite ao utilizador 10 valores, e indique qual o valor total da sua soma e a media.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       27 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
#include <locale.h>

#define MAX 10
int i, valor, soma = 0;
float media;
int valores[MAX];


int main()
{
	setlocale(LC_ALL, "");
	while (i < 10)
	{
		printf("Introduza o %i numero: \n", i + 1);
		scanf("%i", &valores[i]);
		soma = calcSoma(valores, MAX);
		media = calcMedia(soma, i);
		i++;

	}
	for (i = 0; i < MAX; i++)
	{
		printf("%2dº Valor --> %3d\n", i+1, valores[i]);
	}printf("TOTAL --> %-4d \n", soma);
	printf("MEDIA --> %-4.1f \n", media);
}