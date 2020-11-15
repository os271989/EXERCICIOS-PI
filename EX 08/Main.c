/*****************************************************************//**
 * \file   EX 08
 * \brief  Escrever prog para mostra nome e salario de um funcionario segundo valores introduzidos
 * aluno 20844
 * \author Oscar Araujo
 * \date   15 November 2020
 *********************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
float calculoSalario(float a, float b);

int main()
{
	char nome[30];
	float horas, valorHora, salario;

	printf("Introduza o nome do funcionario: \n");
	gets(nome);
	printf("Introduza o numero de horas trabalhadas este mes: \n");
	scanf("%f", &horas);
	printf("Introduza o valor/hora a pagar ao funcionario: \n");
	scanf("%f", &valorHora);
	salario = calculoSalario(horas, valorHora);
	printf("Tendo em conta as %.1f horas trabalhadas o %s ira receber este mes %.2f euros.\n", horas, nome, salario);

	system("pause");
}

#pragma region Funcao
float calculoSalario(float a, float b)			//Calculo de salario em relaçao a nº de horas/preço hora
{
	return(a * b);
	
}
#pragma endregion