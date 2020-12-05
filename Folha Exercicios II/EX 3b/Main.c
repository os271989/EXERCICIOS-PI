/*****************************************************************//**
 * \file   Main.c
 * \brief  a)Implemente a função calculaMediaTresValores com valores definidos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/**
 * main:
 * Funcao que assume 3 valores e recorre a função externa para calcular a media de todos os valores
 * Mostra ao utilizador os valores definidos, a soma e a media deles todos
 */

int main()
{
	/// Array valores --> Contem tres valores assumidos
	/// Variaveis:
	/// i -> controla os ciclos
	/// media -> recorre a função externa para receber a media dos 3 valores
	/// soma -> recorre a função externa para receber a soma dos 3 valores
	float valores[] = { 13, -29, 33 };
	int i;
	float media, soma;

	soma = calculaSoma(valores, 3);
	media = calculaMedia(soma, 3);

	for (i = 0; i < 3; i++)
	{
		printf("VALOR%i --> %3.2f \n", i + 1, valores[i]);
	}printf("TOTAL --> %3.2f \n", soma);
	printf("MEDIA --> %3.2f \n", media);

}