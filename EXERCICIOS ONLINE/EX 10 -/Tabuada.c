/*****************************************************************//**
 * \file   Tabuada.c
 * \brief  Funcao que recebe um valor e mostra a tabuada até 10 desse mesmo valor
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include "Funcao.h";

void calcTabuada(int x)
{
	int y;
	for (y = 1; y <= 10; y++)
	{
		printf("%i x %2d = %-2d \n", x, y, x * y);
	}

}