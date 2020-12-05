/*****************************************************************//**
 * \file   calculaMediaTresValores.c
 * \brief  2 Fun��es que calculam a soma e m�dia de todos os valores contidos no array.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

 //Inclusao do ficheiro de cabe�alho com as assinaturas para poder chamar estas fun��es
#include "Funcoes.h"

/**
 * calculaSoma:
 * Funcao que recebe um array de valores e devolve a soma de todos os seus elementos
 * \param x -->Recebe um Array de tipo float
 * \param size -->Recebe um valor inteiro definindo o tamanho do Array
 * \return -->Devolve a soma de todos os valores contidos no Array
 */
float calculaSoma(float x[], int size)
{
	float aux = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		aux += x[i];
	}return aux;
}

/**
 * calculaMedia:
 * Fun��o que recebe dois valores e calcula a m�dia deles
 * \param x -->Recebe um valor tipo float para dividir
 * \param y -->Recebe um valor tipo int
 * \return -->Devolve a media entre os dois valores
 */

float calculaMedia(float x, int y)
{
	float aux = (x / y);
	return aux;
}