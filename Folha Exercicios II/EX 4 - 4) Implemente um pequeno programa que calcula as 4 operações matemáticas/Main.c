/*****************************************************************//**
 * \file   Main.c
 * \brief  4)Implemente um pequeno programa que calcula as opera��es matem�ticas: soma, subtra��o, multiplica��o e divis�o.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

#include <stdio.h>
#include "Auxiliares.h"
#include <string.h>

/**
 * main:
 * Fun��o que define um Array de valores e pede uma op��o de opera��o ao utilizador
 * valores --> Array de valores
 * valor --> Recorre a fun��o externa para calcular resultado
 */
int main()
{
	setlocale(LC_ALL, "");
	int valores[] = { 13, -56, 75, 26 };
	float valor;
	//Operadores operador[4] = { {"+", "SOMA"},{'-', "SUBTRA��O"},{'*', "MULTIPLICA��O"}, {'/', "DIVIS�O"} };

		mostraArray(valores, 4);
		//mostraOperadores(operador, 4);

		printf("1) [+] --> ADI��O \n");
		printf("2) [-] --> SUBTRA��O \n");
		printf("3) [*] --> MULTIPLICA��O \n");
		printf("4) [/] --> DIVIS�O \n");

		///valor recorre a fun��o externa 'resultado' e assume o resultado da opera��o segundo valores escolhidos
		valor = resultado(valores, 4);
		printf("O resultado da sua opera��o � %.2f \n", valor);
		printf("\n===== FIM DO PROGRAMA ===== \n");

}