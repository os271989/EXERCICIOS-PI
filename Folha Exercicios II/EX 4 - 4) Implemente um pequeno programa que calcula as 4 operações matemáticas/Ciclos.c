/*****************************************************************//**
 * \file   Ciclos.c
 * \brief  Ficheiro que contem os ciclos a realizar no programa
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

#include "Auxiliares.h"
#include <stdio.h>
#include <locale.h>

/**
 * mostraArray:
 * Mostra todos os valores definidos no programa
 * \param x -->Recebe um Array de inteiros
 * \param size -->Recebe o tamanho do array
 */

void mostraArray(int x[], int size)
{
	printf("****** VALORES DISPONIVEIS ***** \n");

	for(int i = 0; i < size; i++)
	{
		printf("%i) [%3d] \n",i+1, x[i]);
	}printf("\n");
}

/**
 * resultado:
 * Função para devolver o resultado da operação escolhida pelo utilizador
 * \param x -->Recebe um Array de inteiros
 * \param size -->Recebe o tamanho do Array
 * \return -->Devolve o resultado segundo a opção do operador escolhida
 */
float resultado(int x[], int size)
{	
	setlocale(LC_ALL, "");
	int v1, v2, operador = 0;
	float valor;
	printf("\nEscolha os valores a utilizar[1-4]: \n");
	scanf("%i %i",&v1, &v2);

	///Switch para segundo as opções do utilizador atribuir um valor do array
	switch (v1)
	{
	case (1):
		v1 = x[0];
		break;
	case (2):
		v1 = x[1];
		break;
	case (3):
		v1 = x[2];
		break;
	case (4):
		v1 = x[3];
		break;
	default:
		printf("Opção Inválida!!");
		break;
	}
	switch (v2)
	{
	case (1):
		v2 = x[0];
		break;
	case (2):
		v2 = x[1];
		break;
	case (3):
		v2 = x[2];
		break;
	case (4):
		v2 = x[3];
		break;
	default:
		printf("Opção Inválida!!");
		break;
	}

	printf("Escolha uma operação [1-4]: \n ");
	scanf("%i", &operador);

	///Switch para escolher a operação segundo a opção escolhida
	switch (operador)
	{
	case(1):
		valor = v1 + v2;
		break;
	case(2):
		valor = v1 - v2;
		break;
	case(3):
		valor = v1 * v2;
		break;
	case(4):
		valor = (float)v1 / v2;
		break;
	default:
		printf("Operação Impossivel!!");
		break;

	}
	
	return valor;
}



/*void mostraOperadores(Operadores x[], int size)
{
	for (int i = 0; i < size; i++)
		printf("\n %s --> %s ", x[i].simbolo, x[i].nome);
}*/


