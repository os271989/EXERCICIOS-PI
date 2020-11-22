/*****************************************************************//**
 * \file       Main.c
 * \brief      Utilizando a estrutura de repetição for, faça um programa em C que receba 10 números e 
 *			   conte quantos deles estão no intervalo [10,20] 
 *             e quantos deles estão fora do intervalo, escrevendo estas informações.
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
  * Declarar variaveis para somar os numeros Dentro e Fora do intervalo [10-20]
  */
int main()
{
	int c, num;
	int dentro = 0;
	int fora = 0;

	setlocale(LC_ALL, "Portuguese");

	/// Estrutura FOR para repetir o ciclo e pedir um numero 10x
	/// Condicional if/else para registar quantos dentro e fora do intervalo [10-20] foram introduzidos

	for (c = 1; c <= 10; c++)
	{
		printf("Introduza um valor inteiro para o %iº Registo: \n", c);
		scanf("%i", &num);

		/// Se for dentro [10-20] adiciona 1 ao somatorio dos numeros dentro

		if (num >= 10 && num <= 20)
		{
			dentro++;
			printf("O valor '%i' inserido está dentro do intervalo [10-20]. \n", num);
		}

		/// Se for fora [10-20]  adiciona 1 ao somatorio dos numeros fora

		else
		{
			fora++;
			printf("O valor '%i' inserido está fora do intervalo [10-20]. \n", num);
		}
		num = 0;
	}printf("No total de 10 números inseridos e considerando o intervalo [10-20] temos %i numeros dentro e %i numeros fora. \n", dentro, fora);

	system("Pause");

}