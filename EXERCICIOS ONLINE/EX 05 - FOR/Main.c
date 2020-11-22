/*****************************************************************//**
 * \file       Main.c
 * \brief      Ler 10 números e imprimir quantos são pares e quantos são ímpares.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       22 November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <execution>
#pragma warning (disable: 4996)

/**
 * Funcao principal
 * Incluir ficheiro de cabeçalho Locale.h para usar setLocale e apresentar caracteres especiais ('ã','ç','é')
 * Declarar variaveis para somar os parese impares
 */
int main()
{
	int c, num;
	int somaPar = 0;
	int somaImpar = 0;

	setlocale(LC_ALL, "Portuguese");

	/// Estrutura FOR para repetir o ciclo e pedir um numero 10x
	/// Condicional if/else para registar quantos pares e impares introduzidos
	
	for (c = 1; c <= 10; c++)
	{
		printf("Introduza um valor inteiro para o %iº Registo: \n", c);
		scanf("%i", &num);

		/// Se for Par adiciona 1 ao somatorio dos numeros pares
		
		if (num % 2 == 0)
		{
			somaPar++;
			printf("O valor '%i' inserido é PAR. \n", num);
		}

		/// Se for Impar adiciona 1 ao somatorio dos numeros impares

		else
		{
			somaImpar++;
			printf("O valor '%i' inserido é IMPAR. \n", num);
		}
		num = 0;
	}printf("No total de 10 números inseridos temos %i Pares e %i Impares \n",somaPar, somaImpar);

	system("Pause");
	
	


}
