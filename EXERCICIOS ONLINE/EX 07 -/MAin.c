/*****************************************************************//**
 * \file   Main.c
 * \brief  EX7 - Mostre 11 vezes a frase " Hello World!" com uma estrutura sequencial e estrutura de repetição while.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include <stdio.h>
#include <windows.h>

int main()
{
	int i = 0;
	while (i < 11)
	{
		printf("%i --> <Hello World> \n", i+1);
		Sleep(500);
		i++;
	}
}