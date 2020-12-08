/*****************************************************************//**
 * \file   Main.c
 * \brief  Utilzar biblioteca 'string.h' - Demonstrar a utilização de algumas das funções
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

//Ficheiro criado com análise e recurso ao site Cplusplus.com e linguagemc.com.br

#include "Funcoes.h"

int main()
{
	setlocale(LC_ALL, "");
	char string1[20] = { "estudante de EIM" };
	char string2[20] = { "Eu sou o Oscar" };

	printf("Ficheiro criado com análise e recurso ao site Cplusplus.com e linguagemc.com.br \n\n");
	printf("As string definidas pelo programa foram: \n");
	printf("1 - %s \n", string1);
	printf("2 - %s \n", string2);
	escolhaFuncao(string1, 20, string2, 20);



}