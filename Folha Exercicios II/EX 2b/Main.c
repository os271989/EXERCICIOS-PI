/*****************************************************************//**
 * \file   Main.c
 * \brief  b)Implemente funcao somaTresValores	com valores lidos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   4 December 2020
 *********************************************************************/

#include <stdio.h>
#include "Funcao.h"
#pragma warning (disable: 4996)
#define MAX 3

 /**
  * main:
  * Função que assume 3 valores e recorre a função externa para calcular a soma deles mostrando depois tudo no ecra
  * soma --> variavel que recebe o resultado da soma dos valores
  * i --> variavel que controla o ciclo
  */

int main()
{
	float valoresB[MAX];
	float soma;
	int i;

	for (i = 0; i < MAX; i++)
	{
		printf("Introduza o valor%i: \n", i+1);
		scanf("%f", &valoresB[i]);
	}

	soma = somaValoresB(valoresB, MAX);

	for (i = 0; i < 3; i++)
	{
		printf("%i VALOR --> %4.2f \n", i + 1, valoresB[i]);
	}
	printf("SOMA --> %2.2f \n", soma);


}