/*****************************************************************//**
 * \file   Main.c
 * \brief  Faça um programa que mostre a tabuada de um número N (N será lido do teclado). 
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