/*****************************************************************//**
 * \file       Main.c
 * \brief      Escrever um programa para exibir os números de 1 até 50 na tela
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       18 November 2020
 *********************************************************************/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

int main()
{
	
	int i;

	for (i = 0; i <= 50; i++)
	{
		Sleep(20);
		printf("%i \n", i);
		
	}

	system("pause");

}