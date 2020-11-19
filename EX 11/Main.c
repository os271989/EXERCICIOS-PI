/*****************************************************************//**
 * \file       EX 11
 * \brief      Implemente um programa que calcule o Índice de Massa Corporal (IMC) de uma pessoa
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       19 November 2020
 *********************************************************************/

///Inclusao de funcao.h para chamar a funcao de calculo de IMC quando necessario

#include <stdio.h>
#include "Funcao.h"
#include <stdlib.h>
#pragma warning (disable: 4996)

/**
 * Declarar variaveis a considerar para IMC
 * Pedir ao utilizador para inserir valores
 */
int main()
{	
	float peso, altura, imc;

	printf("Introduza o seu peso: \n");
	scanf("%f", &peso);
	printf("Introduza a sua altura: \n");
	scanf("%f", &altura);
	imc = calculoIMC(peso, altura);

	///Estrutura de repeticao 'IF' para os diversos resultados possiveis

	#pragma region Estrutura IF
	
	if (imc < 18.5)
	{
		printf("Tendo em conta os valores introduzidos esta com peso baixo!! \n");
	}
	if (imc >= 18.5 || imc < 24.9)
	{
		printf("Tendo em conta os valores introduzidos esta com excesso de peso!! \n");
	}
	if (imc >= 25 || imc < 29.9)
	{
		printf("Tendo em conta os valores introduzidos esta com peso normal!! \n");
	}
	if (imc >= 30 && imc <= 34.9)
	{
		printf("Tendo em conta os valores introduzidos esta com Obesidade Classe I (Moderada)!! \n");
	}
	if (imc >= 35 && imc < 39.9)
	{
		printf("Tendo em conta os valores introduzidos esta com Obesidade Classe II (Severa)!! \n");
	}
	if (imc >= 40)
	{
		printf("Tendo em conta os valores introduzidos esta com Obesidade Classe III (Morbida)!! \n");
	}

	# pragma endregion

	system("pause");

}