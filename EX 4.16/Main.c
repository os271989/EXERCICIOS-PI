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

int i, valor, soma = 0;
float media;

int main()
{
	while (i < 10)
	{
		printf("Introduza o %i numero: \n", i + 1);
		scanf("%i", &valor);
		soma = calcSoma(valor, soma);
		media = calcMedia(soma, 10);
		i++;
		valor = 0;

	}printf("A soma total dos valores introduzidos e %i resultando numa media de %.2f. \n", soma, media);
}