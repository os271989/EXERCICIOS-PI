/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funcoes a ser chamadas para funcao principal
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include "Funcoes.h"

void escolhaFuncao(char x, int s1, char y, int s2)
{
	int i, escolha;
	int c1, c2 = 0;
	setlocale(LC_ALL, "");
	do {
		printf("\nEscolha uma Função a executar: \n");
		printf("1 - Comprimentos e MAIOR String \n2 - Concatenar (Junção) \n3 - Procurar vogais \n4 - Substituir 'estudante de EIM' por 'estudante do IPCA'\n");
		scanf("%d", &escolha);

		switch (escolha)
		{
		case(1):
				printf("STRING1 = %d \nSTRING2 = %d \n", strlen(x), strlen(y));
				if (strlen(x) > strlen(y))
				{
					printf("A maior string é %s \n", x);
				}
				else
				{
					printf("A maior string é %s \n", y);
				}
				break;
		default:
			break;
		}






	} while (escolha >0 && escolha <=4);




}
