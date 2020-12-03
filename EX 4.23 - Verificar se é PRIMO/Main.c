/*****************************************************************//**
 * \file   Main.c
 * \brief  23. Dado um valor inteiro, verifique se é um número primo.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   3 December 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)	

int main()
{
	int valor, i;
	int divisor = 0;

	printf("Introduza um valor inteiro: \n");
	scanf("%i", &valor);

	for (i = 1; i <= valor; i++)
	{
		if (valor % i == 0)
		{
			divisor++;
		}
	}
	if (divisor == 2)
	{
		printf("O Numero introduzido e um numero PRIMO. \n");
	}
	else
	{
		printf("O Numero introduzido nao e um numero PRIMO. \n");
	}
	
	system("Pause");
}
