/*****************************************************************//**
 * \file       Main.c
 * \brief      Ler um valor inteiro (somente entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       21 November 2020
 *********************************************************************/

///Introduzir ficheiros de cabecalho necessários


#include <stdio.h>
#include <windows.h>
#include "Funcao.h"
#include <locale.h>
#pragma warning (disable: 4996)

int main()
{	
	int c, num, tabuada;
	setlocale(LC_ALL, "Portuguese");

	printf("Introduza um número entre 1-10 para mostrar a sua tabuada: \n");
	scanf("%i", &num);
	if (num < 1 || num > 10)
	{
		printf("O número introduzido está fora dos limites do programa!!! \n");
	}
	else
	{
		for (c = 1; c <= 10; c++)
		{
			tabuada = calcTabuada(num, c);
			printf("%i x %2d = %3d \n", num, c, tabuada);
			Sleep(350);
		}
	}
}

