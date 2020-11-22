/*****************************************************************//**
 * \file       Main.c
 * \brief      Fazer um programa para encontrar todos os pares entre 1 e 100.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       21 November 2020
 *********************************************************************/


///Incluir Ficheiros .h
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int n;

	printf("Os numeros pares entre 0 e 100 sao: \n");
	for (n = 0; n <= 100; n++)
	{
		if (n % 2 == 0)
		{
			printf("%i \n", n);
		}
		Sleep(100);
	}


}