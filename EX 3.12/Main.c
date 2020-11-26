/*****************************************************************//**
 * \file       Main.c
 * \brief      3.12 -Dadas duas palavras introduzidas pelo utilizador, indique qual a que tem maior comprimento.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       23 November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Funcao.h"					///inclusao para chamar funcao criada para comparar as duas palavras inseridas
#include <string.h>					///inclusao para poder utilizar funcoes de manipulacao de string
#pragma warning (disable: 4996)


int main()
{
	char p1[20]; 
	char p2[20];
	char maior[20];

	printf("Escreva a primeira palavra a considerar: \n");
	scanf("%s",p1);
	printf("Escreva a segunda palavra a considerar: \n");
	scanf("%s",p2);
	maior = strcopy(calcMaior(p1, p2));				///String 'maior' vai ser uma copia da string que resulta da funcao
	

	///printf("Analisando a palavra '%s' e '%s' a maior e a '%s' com %i letras.", p1, p2, maior, strlen(maior[20]));
	printf("A palavra '%s' tem %i letras e a palavra '%s' tem %i letras. \n", p1, strlen(p1), p2, strlen(p2));
	printf("A palavra mais comprida e '%s' \n", maior);
	system("Pause");
}