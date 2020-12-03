/*****************************************************************//**
 * \file   Main.c
 * \brief  4.20 - Solicite ao utilizador um valor inteiro. Se o valor for igual ou inferior a 15, 
 * \apresente no ecrã um quadrado com esse número de caracteres de largura e altura.
 * \Se o valor for superior a 15, apresente uma mensagem de erro. 
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   30 November 2020
 *********************************************************************/

#pragma warning (disable: 4996)		///Forma de desativar erro de leitura de dados com scanf
#include <stdio.h>					///"Biblioteca" de funcoes input/output
#include <stdlib.h>					///"Biblioteca" para chamar funcao 'system'
#include <locale.h>

int valor;
int linhas, colunas = 1;


/**
 * main:
 * Pede ao utilizador um numero inteiro e aplica 2 condicoes
 * 'if' --> Numero introduzido <= 15 mostra um quadrado com esse numero de linhas e colunas
 * 'else'(numero introduzido > 15) --> Mostra uma mensagem de erro
 */

int main()
{
	setlocale(LC_ALL, "");
	printf("Introduza um numero inteiro: \n");
	scanf("%i", &valor);
	if (valor <= 15)
	{
		while (colunas <= valor)
		{
			if (colunas == 1 || colunas == valor)
			{
				for (linhas = 1; linhas <= valor-1; linhas++)
				{
					printf("* ");
				}
				printf("\n");
			}if (colunas > 1 && colunas < valor)
			{
				printf("* \n");
			}
			colunas++;
		}
	
		
	}
	else
	{
		printf("O valor introduzido é inválido!!! \n");
	}

}

