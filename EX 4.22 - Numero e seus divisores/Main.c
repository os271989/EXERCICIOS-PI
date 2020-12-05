/*****************************************************************//**
 * \file   Main.c
 * \brief  22. Dado um valor inteiro, apresente todos os seus divisores.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   3 December 2020
 *********************************************************************/

/**
 *\ pragma warning --> Elimina o erro de leitura devido a utilizaçao de funçao scanf
 *\"Funcao.h" --> Inclusao de ficheiro de cabeçalho criado para poder chamar funcoes criadas em outros ficheiros
 */

#include <stdio.h>
#pragma warning (disable: 4996)	
#include "Funcao.h"
#include <stdlib.h>
#include <locale.h>

/**
 * main:
 * <Funcao principal que vai pedir um numero ao utilizador e mostrar todos os seus divisores>
 */
int main()
{
	int valor;
	setlocale(LC_ALL, "");

	printf("Introduza um valor inteiro: \n");
	scanf("%i", &valor);
	calcDivisores(valor);

    system("Pause");

}

