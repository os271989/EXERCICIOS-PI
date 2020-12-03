/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funcoes a ser chamadas para funcao main
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   2 December 2020
 *********************************************************************/

#include <stdio.h>
#include "Funcao.h"

int calcSoma(int x, int *y);
float calcMedia(float x, int y);


/// calcSoma
/// </summary --> Funcao para somar todos os valores introduzidos
/// <param name="x" --> Recebe variavel soma que serve de somatorio	
/// <param name="y" --> Recebe variavel valor que e introduzido
/// <returns> --> Devolve o resultado da soma dos dois numeros

int calcSoma(int x[], int size)

{	
	int i, soma = 0;

	for (i = 0; i < size; i++)
	{
		soma += x[i];
	}return soma;
}

/// Function: calcMedia
/// </summary> --> Funcao que calcula a media entre 2 valores
/// <param name="x" --> Recebe variavel soma com o total de todos os valores introduzidos
/// <param name="y" --> Recebe variavel i com o numero de valores introduzidos
/// <returns> --> Devolve a divisao dos dois valores

float calcMedia(float x, int y)
{
	return (x / y);
}