/*****************************************************************//**
 * \file       Funcoes.c
 * \brief      Funcao para utillizar formula resolvente
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       18 November 2020
 *********************************************************************/

#include <math.h>
#include "Funcoes.h"

/// X --> Calculo de toda a parte da raiz quadrada
/// Y --> Calculo de 1a Raiz.
/// Z --> Calculo de 2a Raiz.
/// <param name="a" Introduzido pelo utilizador>
/// <param name="b" Introduzido pelo utilizador>
/// <param name="c" Introduzido pelo utilizador>
/// <returns (y, z) --> Devolve as 2 raizes da equacao>

float calculoRaizes(float a, float b, float c);

#pragma region Formula Resolvente

float calculoRaizes(float a, float b, float c)
{
	float x, y, z;
	x = (sqrt((b*b) - (4*(a * c))));
	y = (-(b) + (x) / (2 * a));
	z = (-(b) - (x) / (2 * a));

	return (y, z);
	}

#pragma endregion