/*****************************************************************//**
 * \file       Funcao IMC.c
 * \brief      Funcao para calcular IMC
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       19 November 2020
 *********************************************************************/

///inclusao de Math.h para funcao pow (expoente)
///inslusao de Funcao.h criado para fazer ligacao do ficheiro da funcao com ficheiro da funcao Main
 
#include "Funcao.h"
#include <math.h>

float calculoImc(float p, float a);

/**
 * .
 * 
 * \param p --> variavel que ira considerar o peso
 * \param a --> variavel que ira considerar a altura
 * \return  --> irá devolver o valor do IMC segundo dados
 */

float calculoImc(float p, float a)
{
	float valor = ((p) / (a*a));
	return(valor);

}
	
