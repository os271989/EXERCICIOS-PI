/*****************************************************************//**
 * \file       Main.c
 * \brief      EX 03 - Calcular Area e Perimetro do triangulo
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       18 November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)
float areaTri(float x, float y);
float calcHipotenusa(float x, float y);
float calcPerimetro(float x, float y, float c);

float alt = 7;
float lar = 5;
float hip, perimetro;

int main()
{
	printf("Altura do triangulo: %.0f cm\n", alt);
	printf("Largura do triangulo: %.0f cm\n", lar);
	float area = areaTri(alt, lar);
	hip = calcHipotenusa(alt, lar);
	perimetro = calcPerimetro(alt, lar, hip);
	printf("Tendo em conta as dimensoes a area do triangulo e %.2f cm2.\n",area);
	printf("A Hipotenusa e igual a %.1fcm \n", hip);
	printf("Tendo em conta as dimensoes o perimetro do triangulo e %.2f cm.\n",perimetro);
	system("pause");

}

#pragma region Funcoes
float calcHipotenusa(float a, float b, int c)
{
	 float valor =pow((a+b),2);
		return(sqrt(valor));
}
float areaTri(float a, float b)
{
	return((a * b) / 2);

}
float calcPerimetro(float a, float b, float c)
{
	return (a + b + c);
}
#pragma endregion