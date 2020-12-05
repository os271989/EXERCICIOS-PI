/*****************************************************************//**
 * \file   Main.c
 * \brief  a)Implemente funcao somaTresValores	com valores assumidos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   4 December 2020
 *********************************************************************/

#include <stdio.h>
#include "Funcao.h"
#define MAX 3

/**
 * main:
 * Função que assume 3 valores e recorre a função externa para calcular a soma deles mostrando depois tudo no ecra
 * soma --> variavel que recebe o resultado da soma dos valores
 * i --> variavel que controla o ciclo
 */

int main()
{
	float valoresA[] = { 3.5, -36.0, 47.8 };
	float soma;
	int i;

	soma = somaValoresA(valoresA, MAX);

	for (i = 0; i < 3; i++)
	{
		printf("%i VALOR --> %4.2f \n", i + 1, valoresA[i]);
	}
	printf("SOMA --> %2.2f \n", soma);


}