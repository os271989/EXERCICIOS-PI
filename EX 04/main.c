/*****************************************************************//**
 * \file   EX 04
 * \brief  Calculo de area e perimetro de um circulo
 * \nº	   20844
 * \author Oscar Araujo
 * \date   11 November 2020
 *********************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)
double areaCir(float raio);
float perimetroCir(float raio);

float raio;

int main()
{	
	printf("Introduza o valor real do raio da circunferencia: \n");
	scanf("%f", &raio);
	float area = areaCir(raio);
	float perimetro = perimetroCir(raio);
	printf("Com raio de %.2f, a area da Circunferencia e %.4f e o Perimetro e %.2f \n", raio, area, perimetro);
	system("pause");

}

#pragma region (Funcoes)
double areaCir(float x)
{
	const float PI = 3.14;
	float valor = (PI * x);
	return (pow(valor,2));
}
float perimetroCir(float x)
{
	const float PI = 3.14;
	return((PI * x)*2);
}

#pragma endregion