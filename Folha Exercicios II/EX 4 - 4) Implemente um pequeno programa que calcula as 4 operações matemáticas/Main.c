/*****************************************************************//**
 * \file   Main.c
 * \brief  4)Implemente um pequeno programa que calcula as operações matemáticas: soma, subtração, multiplicação e divisão.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

#include <stdio.h>
#include "Auxiliares.h"
#include <string.h>

/**
 * main:
 * Função que define um Array de valores e pede uma opção de operação ao utilizador
 * valores --> Array de valores
 * valor --> Recorre a função externa para calcular resultado
 */
int main()
{
	setlocale(LC_ALL, "");
	int valores[] = { 13, -56, 75, 26 };
	float valor;
	//Operadores operador[4] = { {"+", "SOMA"},{'-', "SUBTRAÇÃO"},{'*', "MULTIPLICAÇÃO"}, {'/', "DIVISÃO"} };

		mostraArray(valores, 4);
		//mostraOperadores(operador, 4);

		printf("1) [+] --> ADIÇÃO \n");
		printf("2) [-] --> SUBTRAÇÃO \n");
		printf("3) [*] --> MULTIPLICAÇÃO \n");
		printf("4) [/] --> DIVISÃO \n");

		///valor recorre a função externa 'resultado' e assume o resultado da operação segundo valores escolhidos
		valor = resultado(valores, 4);
		printf("O resultado da sua operação é %.2f \n", valor);
		printf("\n===== FIM DO PROGRAMA ===== \n");

}