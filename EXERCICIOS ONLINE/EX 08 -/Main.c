/*****************************************************************//**
 * \file   Main.c
 * \brief  8 - Programa para exibir os n�meros de 1 at� 50 no ecr�.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include <stdio.h>
#include <windows.h>
#define MAX 50

int main()
{
	int i = 0;

	while (i < MAX)
	{
		printf("%d \n", i + 1);
		Sleep(250);
		i++;
	}
}