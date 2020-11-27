/*****************************************************************//**
 * \file       Main.c
 * \brief      4.15 -Solicite ao utilizador 10 valores, e indique qual o valor total da sua soma.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       26 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcao.h"

int i, valor, soma = 0;

int main()
{
	while (i < 10)
	{
		printf("Introduza o %i numero: \n", i+1);
		scanf("%i", &valor);
		soma = calcSoma(valor, soma);
		i++;
		valor = 0;

	}printf("A soma total dos valores introduzidos e %i. \n", soma);
}