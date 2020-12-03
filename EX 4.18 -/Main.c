/*****************************************************************//**
 * \file   Main.c
 * \brief  4.18 - Pedir n valores e mostrar soma, media, maior e menor valor.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   30 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

int valor, soma, i, maior, menor;
float media;
char entrada[3];

int main()
{
	while (valor)
	{
		printf("Introduza o %i numero inteiro: \n", i + 1);
		scanf("%s", &entrada);
		scanf("%i", &valor);
		soma = calcSoma(valor, soma);
		media = calcMedia(soma, 10);

		if (i = 0)
		{
			maior = valor;
			menor = valor;
		}
		else
		{
			if (valor > maior)
			{
				maior = valor;
			}
			if (valor < menor)
			{
				menor = valor;
			}
		}
		i++;
		valor = 0;

	}printf("Introduziu %i valores. \n", i+1);
	printf("A soma total dos valores introduzidos e %i. \n", soma);
	printf("A media foi e de %.2f o maior numero foi o %i e o menor foi o %i. \n", media, maior, menor);
	system("Pause");

}