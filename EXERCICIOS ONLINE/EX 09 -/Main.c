/*****************************************************************//**
 * \file   Main.c
 * \brief  9 - Crie um programa para ler 3 notas e mostrar a m�dia delas.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include "Funcoes.h"

int main()
{
	float valores[3];
	float media;
	setlocale(LC_ALL, "");

	for (int i = 0; i < 3; i++)
	{
		printf("Introduza a %i� nota do aluno: \n", i + 1);
		scanf("%f", &valores[i]);
	}
	media = calculaMedia(valores, 3);
	printf("A m�dia dos 3 valores � %.3f \n", media);
}
