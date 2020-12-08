/*****************************************************************//**
 * \file   Main.c
 * \brief  EX11 - Pedir um valor entre 12-20 se fora do intervalo mostrar erro, senão mostrar valor inserido
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include<stdio.h>
#include <locale.h>
#pragma warning (disable: 4996)

int main()
{
	float valor;
	int i = 0;
	setlocale(LC_ALL, "");

	do {
		printf("Introduza um valor no intervalo [12;20]: \n");
		scanf("%f", &valor);

		if (valor < 12 && valor < 20) {
			printf("ENTRADA INVÁLIDA!! TENTE NOVAMENTE \n");
			i++;
			continue;
		}
		else {
			printf("O valor introduzido foi o %.3f", valor);
			break;
		}

	} while (i != 0);
}