/*****************************************************************//**
 * \file       Main.c
 * \brief      10.Dados 2 valores inteiros introduzidos pelo utilizador, apresente o maior.
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
	int n1, n2, maior;

	printf("Introduza o Primeiro Valor: \n");
	scanf("%i", &n1);
	printf("Introduza o Segundo Valor: \n");
	scanf("%i", &n2);
	maior = calculoMaior(n1, n2);
	printf("Tendo em conta o valor %i e o valor %i o maior e o %i \n", n1, n2, maior);

	system("Pause");




}