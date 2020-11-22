/*****************************************************************//**
 * \file       Main.c
 * \brief      Leia várias idades e calcule a média entre as idades (usar uma variável para idade)
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       21 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
#include <locale.h>

/// Declaracao de variavel p (para contar as pessoas)
/// Declaracao de variavel idade (para somar as idades todas introduzidas) 
/// Declaracao de variavel media
/// Declaracao de variavel soma (para somar o total de idades)
/// Incluir ficheiro de cabecalho locale.h para apresentar caracteres portugueses "ã, é, ç"
/// <returns> --> Devolve a media do total de idades inserido
int main()
{
	int p;
	int idade = 1;
	float media, soma = 0;
	setlocale(LC_ALL, "Portuguese");

	for (p = 1; idade > 0; p++)
	{
		idade = 0;
		printf("Introduza a idade da %iª pessoa [0 para terminar]: \n", p);
		fflush(stdin);
		scanf("%i", &idade);
		if (idade > 0)
		{
			soma += idade;
			media = calcMedia(soma, p);
		}

	}
	printf("==== FIM DO PROGRAMA ==== \n");
	printf("Foram introduzidas %i pessoas totalizando %.0f anos numa média de %.2f anos. \n", p-2, soma, media);

}