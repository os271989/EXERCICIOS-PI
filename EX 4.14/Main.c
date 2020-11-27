/*****************************************************************//**
 * \file       Main.c
 * \brief      4.14 -Solicite ao utilizador um valor inteiro, e apresente no ecrã a tabuada para esse valor.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       26 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcao.h"

int valor, tabuada;

int main()
{
	printf("Introduza o valor da tabuada que deseja vizualizar: \n");
	scanf("%i", valor);
	tabuada = calcTabuada(valor);
	printf("%i", tabuada);




}