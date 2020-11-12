/*****************************************************************//**
 * \file   EX 04
 * \brief  Calculo de area e perimetro de um circulo
 * \nº	   20844
 * \author Oscar Araujo
 * \date   11 November 2020
 *********************************************************************/


#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)
float areaCir(const a, float b, int c);
float perimetroCir(const a, float b, int c);

const float Pi = 3.14;
float raio;

int main()
{	
	float area = areaCir(Pi, raio);
	float perimetro = perimetroCir(Pi, raio);
	printf("Introduza o valor real do raio da circunferencia: \n");
	scanf("%f", &raio);
	printf("Com raio de %.2f, a area da Circunferencia e %.2f e o Perimetro e %.2f", raio, area, perimetro);
	system("pause");

}

#pragma region (Funcoes)
float areaCir(const float x, float y, int c)
{
	return (pow((x*y),2));
}
float perimetroCir(const float x, float y, int c)
{
	return((x * y)*2);
}

#pragma endregion