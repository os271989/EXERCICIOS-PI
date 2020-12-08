/*****************************************************************//**
 * \file   Media.c
 * \brief  Funcao para receber o array com os valores e calcular a media
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/
#include "Funcoes.h"

float calculaMedia(float x[], int s)
{
	float aux = 0;

	for (int i = 0; i < s; i++)
	{
		aux += (x[i]);
	}
	
	return(aux/s);
}
