/*****************************************************************//**
 * \file       Main.c
 * \brief      EX 10 - Calcular raizes de uma equaçao quadratica inserindo valores flutuantes e Formula resolvente
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       18 November 2020
 *********************************************************************/

#include <stdio.h>
#include "Funcoes.h"
#include <stdlib.h>
#pragma warning (disable: 4996)

int main()
{///Declarar as variaveis de cada termo da equacao e pedir ao utilizador para introduzir o coeficiente
	float a, b, c;
	float raizes;


	printf("Introduza qualquer valor para coeficiente do termo de 2 grau: \n");
	scanf("%f", &a);
	printf("Introduza qualquer valor para coeficiente do termo de 1 grau: \n");
	scanf("%f", &b);
	printf("Introduza qualquer valor termo sem icognita: \n");
	scanf("%f", &c);
	raizes = calculoRaizes(a, b, c);
	printf("Considerando valores introduzidos: a = %.2f b = %.2f c = %.2f \n", a, b, c);
	printf("%.2fX2 %.2fX %.2f \n", a, +b, +c);
	printf("As raizes da equacao sao X = %.2f \n", raizes);

	system("pause");
}