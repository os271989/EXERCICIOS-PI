/*****************************************************************//**
 * \file       Main.c
 * \brief      3.13 -Dadas duas palavras introduzidas pelo utilizador, verifique se alguma delas inclui a outra.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       25 November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>					///Chamar string.h para poder usar funcoes de manipulacao de string
#pragma warning (disable: 4996)

int main()
{
	char p1 [20];
	char p2 [20];

	printf("Introduza a primeira palavra: \n");
	scanf("%s", p1);
	printf("Introduza a primeira palavra: \n");
	scanf("%s", p2);
	int i = strnlen(p1);

	for (i = 0; i < 20; i++)
	{

	}

	

	system("Pause");
}