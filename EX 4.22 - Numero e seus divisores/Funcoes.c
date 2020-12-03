/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funcao que vai procurar os divisores dentro do valor introduzido
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   3 December 2020
 *********************************************************************/
#include "Funcao.h"
#include <stdio.h>

/**
 * calcDivisores:
 * Recebe um valor e contem um ciclo para procurar dentro desse valor os seus divisores
 * Ciclo 'for' para mostrar todos os divisores encontrados dentro do valor
 * param x --> Recebe o valor introduzido pelo utilizador
 */

void calcDivisores(int x)
{
	int i = 1;
	printf("Divisores de %3i: \n", x);

	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			printf("%-3d \n", i);
		}

	}
}