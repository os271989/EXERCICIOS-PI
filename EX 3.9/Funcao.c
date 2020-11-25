/*****************************************************************//**
 * \file       Funcao.c
 * \brief      Funcao IF para analizar o numero inserido
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       23 November 2020
 *********************************************************************/

#include <stdio.h>
#include "Funcao.h"

char* tipoValor(int n)
{
	if (n % 2 == 0)
		return "PAR";
	else
	{
		return "IMPAR";
	}
}