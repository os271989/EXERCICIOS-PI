/*****************************************************************//**
 * \file   Funcao.c
 * \brief  Função que vai receber um array de valores e somar todos os elementos nele contidos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   4 December 2020
 *********************************************************************/
#include "Funcao.h"

/**
 * somaValores:
 * Funcao recebe um array e executa um ciclo para somar todos os elementos do array.
 * \param x -->Recebe um array
 * \param size -->Tamanho do array
 * \return  -->Devolve a soma de todos os elementos
 */

float somaValores(float x[], int size)
{
	int i;
	float total = 0;

	for (i = 0; i < size; i++)
	{
		total += x[i];

	}return total;
}

/**
 * ordenaValores:
 * Função para ordena por ordem crescente os valores no array
 * \param x -->Recebe Array
 * \param size -->Recebe tamanho do Array
 */
void ordenaValores(float x[], int size)
{
	int i, j, aux;
	for (i = 0; i < size-1; i++)
	{
		for (j = (i + 1); j < size; j++)
		{
			if (x[i] > x[j])
			{
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;

			}
		}
	}
}
