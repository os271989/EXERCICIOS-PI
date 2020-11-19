/*****************************************************************//**
 * \file   EX 09
 * \brief  Calculo de comprimento de um vetor tendo em conta pontos introduzidos por utilizador
 * \aluno  20844
 * \author Oscar Araujo
 * \date   15 November 2020
 *********************************************************************/

//Bibliotecas a utilizar

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

///Assinatura da funcao

double calculoVetor(float a, float b, float c, float d);

int main()
{
	float x1, y1, x2, y2, vetor;
///Pedir a utilizador para introduzir os pontos a considerar

	printf ("Introduza um valor para 'X1': \n");
	scanf("%f", &x1);
	printf("Introduza um valor para 'Y1': \n");
	scanf("%f", &y1);
	printf("Introduza um valor para 'X2': \n");
	scanf("%f", &x2);
	printf("Introduza um valor para 'Y2': \n");
	scanf("%f", &y2);
	vetor = calculoVetor(x1, y1, x2, y2);
	printf("A distancia entre o ponto P1(%.2f,%.2f) e P2(%.2f,%.2f) e de %.2f \n", x1, y1, x2, y2, vetor);

	system("pause");
}

#pragma region calculoVetor
double calculoVetor(float a, float b, float c, float d)
{
	double valor = (pow((c - a) , 2) + pow((d - b) , 2));		///Soma dos pontos dos vetores	
	return (sqrt(valor));										///Calculo do comprimento do vetor
}

#pragma endregion