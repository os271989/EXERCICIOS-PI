/*****************************************************************//**
 * \file   Main.c
 * \brief  Fa�a um programa que mostre a tabuada de um n�mero N (N ser� lido do teclado). 
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include "Funcao.h"



int main()
{
	int valor;

	printf("Introduza o valor da tabuada que deseja vizualizar: \n");
	scanf("%i", &valor);
	calcTabuada(valor);

}