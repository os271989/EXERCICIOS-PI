/*****************************************************************//**
 * \file   Main.c
 * \brief  19. Aceite valores inteiros até que o utilizador introduza um linha em branco. 
 *			   Apresente o número de inteiros pares e de inteiros ímpares introduzidos.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   30 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>

/// <int valor> Variavel para receber valores introduzidos pelo utilizador.
/// <i> Variavel contador para o ciclo
/// <pares> Variavel que recebe os valores introduzidos pares
/// <pares> Variavel que recebe os valores introduzidos impares

int valor, i, pares, impares;
i = 0;

int main()
{
	do
	{
		printf("Introduza o %i Valor: \n", i + 1);
		scanf("%i", &valor);
		if (valor % 2 == 0)
		{
			pares++;
		}
		else
		{
			impares++;
		}i++;

	} while (valor != "\0");
		 
	printf("Foram introduzidos %i valores dos quais %i Pares e %i Impares.", i + 1, pares, impares);
	system("Pause");

}