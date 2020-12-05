/*****************************************************************//**
 * \file   Exercicio.aula.c
 * \brief  b)Implemente um programa que calcula a soma de três valores positivos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   4 December 2020
 *********************************************************************/

#include <stdio.h>
#include <locale.h>
#include "Funcao.h"
#pragma warning (disable: 4996)	
#define MAX 3


/**
 * main:
 * Pede tres valores positivos ao utilizador e guarda num array.
 * Chama a funcao para poder mostrar a soma de todos.
 */

int main()
{
	float valores[MAX];
	int i;
	float soma, valor;
	setlocale(LC_ALL, "");

	/// Ciclo for:
	/// Pede ao utilizador para introduzir valores ate atingido o numero maximo de valores definido no programa
	/// Mostra todos os valores por ordem crescente e a soma de todos.
	
	for (i = 0; i < MAX;)
	{
		printf("Introduza o valor %i: \n", i+1);
		scanf("%f", &valor);

		if (valor > 0)
		{
			valores[i] = valor;
			i++;
		}
		else
		{
			printf("Valor Introduzido Inválido!! \n");
		}valor = 0;
	}
	soma = somaValores(valores, MAX);
	ordenaValores(valores, MAX);

	for (i = 0; i < MAX; i++)
	{
		printf("%2dº VALOR --> %.2f \n",i+1, valores[i]);
	}printf("A soma de todos os valores é %.2f. \n", soma);



}

