/*****************************************************************//**
 * \file   somaTresValores.c
 * \brief  Funcao que recebe um array de valores e procede a soma de todos eles
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   4 December 2020
 *********************************************************************/

 ///Declaração de ficheiro de cabeçalho criado para funçoes deste ficheiro poderem ser chamadas
#include "Funcao.h"

/**
 * somaValoresA:
 * Recebe um array de valores flutuantes e soma todos os elementos desse array
 * \param x -->Recebe o Array de valores flutuantes
 * \param size -->Recebe o tamanho do Array
 * \return -->Devolve a soma to tipo FLOAT de todos os elementos do Array
 */

float somaValoresB(float x[], int size)
{
	float total = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		total += x[i];
	}return total;
}