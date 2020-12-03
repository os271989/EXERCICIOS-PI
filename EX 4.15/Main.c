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

#define MAX 10
int i, j, valor, soma = 0;
int valores[MAX];

/**
 * main:
 * Ciclo while vai pedir 10x para introduzir um valor
 * Variavel soma vai servir de somatorio para todos os valores inseridos chamando a funcao criada em outro ficheiro
 */
int main()
{
	while (i < MAX)
	{
		printf("Introduza o %i numero: \n", i+1);
		scanf("%d", &valores[i]);
		i++;

	}///printf("A soma total dos valores introduzidos e %i. \n", soma);

	/*for (i = 0; i < valores; i++)
	{
		printf("Introduza o %i valor: \n", i + 1);
		scanf("%d", &valores[i]);
		soma += calcSoma(soma, valores[i]);
		///soma = soma + valores[i];
	}*/

	soma = calcSoma(valores,MAX);

	for (i = 0; i < MAX; i++)
	{
		printf("%2d Valor --> %3d \n", i + 1, valores[i]);
	}	printf("TOTAL --> %3d \n", soma);


}