/*****************************************************************//**
 * \file   EX 06
 * \brief  Converter 1329 dias em anos, semanas e dias 
 * \aluno  20844
 * \author Oscar Araujo
 * \date   12 November 2020
 *********************************************************************/

//Inclusao de bibliotescas

#include <stdio.h>
#include <stdlib.h>

//Assinaturas das Funções
int calcAnos(int a);
int calcSemanas(int a);
int calcDias(int a);

int main()
{
//Variaveis
	int a = 1329;
	int anos = calcAnos(a);
	int semanas = calcSemanas(a);
	int dias = calcDias(a);
	printf("Numero de dias a converter --> %i dias \n", a);
	printf("ANOS \t----> %i \n", anos);
	printf("SEMANAS ----> %i \n", semanas);
	printf("DIAS \t----> %i \n", dias);

	getchar();


}

#pragma region Calculos

int calcAnos(int a)
{
	return (a / 365);
}

int calcSemanas(int a)
{
	int resto = a % 365;
	return (resto /7);
}

int calcDias(int a)
{
	int resto = (a % 365);
	return (resto % 7);
}

#pragma endregion
