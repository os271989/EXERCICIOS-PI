/*****************************************************************//**
 * \file   EX 05
 * \brief  Apresentar expressoes
 * \aluno  20844
 * \author Oscar Araujo
 * \date   11 November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

int main()
{	//Declaracao de variaveis
	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;
 
	//	Apresentacao de VARIAVEIS
	printf("***** VARIAVEIS *****\n");
	printf("a = 125 \n");
	printf("b = 12345 \n");
	printf("ax = 1234567890 \n");
	printf("s = 4043 \n");
	printf("x = 2.13459 \n");
	printf("dx = 1.1415927 \n");
	printf("c = 'W' \n");
	printf("ux = 2541567890 \n");

	//Apresentacao de resultado das operacoes pedidas
	printf("\n***** OPERACOES *****\n");
	printf("\na + c = %i\n", (int)(a + c));
	printf("x + c = %.5f\n", (float)(x + c));
	printf("dx + x = %.5f\n", (float)(dx + x));
	printf("(int)(dx) + ax = %li\n", (int)(dx + ax));
	printf("a + x = %.5f\n", (float)(a + x));
	printf("s + b =\t %i\n", (int)(s + b));
	printf("ax + b = %ld\n", (int)(ax + b));
	printf("s + c = %i\n", (int)(s + c));
	printf("ax + c = %ld\n", (int)(ax + c));
	printf("ax + ux = %lu\n", (int)(ax + ux));

	system("pause");
}