/*****************************************************************//**
 * \file       Main.c
 * \brief      Ler 10 n�meros e imprimir quantos s�o pares e quantos s�o �mpares.
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
 * Incluir ficheiro de cabe�alho Locale.h para usar setLocale e apresentar caracteres especiais ('�','�','�')
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
		printf("Introduza um valor inteiro para o %i� Registo: \n", c);
		scanf("%i", &num);

		/// Se for Par adiciona 1 ao somatorio dos numeros pares
		
		if (num % 2 == 0)
		{
			somaPar++;
			printf("O valor '%i' inserido � PAR. \n", num);
		}

		/// Se for Impar adiciona 1 ao somatorio dos numeros impares

		else
		{
			somaImpar++;
			printf("O valor '%i' inserido � IMPAR. \n", num);
		}
		num = 0;
	}printf("No total de 10 n�meros inseridos temos %i Pares e %i Impares \n",somaPar, somaImpar);

	system("Pause");
	
	


}
