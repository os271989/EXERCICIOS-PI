/*****************************************************************//**
 * \file       Main.c
 * \brief      3.11 -Dados 3 valores inteiros introduzidos pelo utilizador, indique qual o maior.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       23 November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Funcao.h"
#pragma warning (disable: 4996)


int main()
{
	int n1, n2, n3, maior;

	printf("Introduza o Valor 1: \n");
	scanf("%i", &n1);
	printf("Introduza o Valor 2: \n");
	scanf("%i", &n2);
	printf("Introduza o Valor 3: \n");
	scanf("%i", &n3);
	maior = calculoMaior(n1, n2, n3);
	printf("Tendo em conta os valores introduzidos %i, %i, e %i, o maior e o %i. \n", n1, n2, n3, maior);

	system("Pause");

}