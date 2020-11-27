/*****************************************************************//**
 * \file       Main.c
 * \brief      4.17 -Solicite ao utilizador n valores ate linha em branco, e indique qual o valor total da sua soma e a media.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       27 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

int valor, soma, i = 0;
float media;
char entrada[3];

int main()
{
	while (entrada != " " )
	{
		printf("Introduza o %i numero: \n", i + 1);
		scanf("%s", entrada);
		fflush(stdin);
		scanf("%i", &valor);
		soma = calcSoma(valor, soma);
		media = calcMedia(soma, 10);
		i++;
		valor = 0;

	}printf("Introduziu %i valores. \n", i);
	printf("A soma total dos valores introduzidos e %i resultando numa media de %.2f. \n", soma, media);
	system("Pause");

}