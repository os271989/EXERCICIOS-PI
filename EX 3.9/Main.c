/*****************************************************************//**
 * \file       Main.c
 * \brief      3.09 -Dado um valor inteiro introduzido pelo utilizador, verifique se o valor é par.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       23 November 2020
 *********************************************************************/

#include <stdio.h>
#include "Funcao.h"
#include <stdlib.h>
#pragma warning (disable: 4996)

int main()
{
	int num;

	printf("Introduza um numero inteiro: \n");
	scanf("%i", &num);
	char valor = tipoValor(num);
	//printf("O numero introduzido e %c \n", valor);
	puts("O numero introduzido e %s", valor);

	system("Pause");

}