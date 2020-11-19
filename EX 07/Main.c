/*****************************************************************//**
 * \file   EX 07
 * \brief  7.	Escreva um programa C que aceite o peso de dois artigos (valores em virgula flutuante)
 * \			e a quantidade comprada (valores em virgula flutuante) e calcule o valor médio dos artigo.
 * \aluno  20844
 * \author Oscar Araujo
 * \date   November 2020
 *********************************************************************/

///Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

///Assinatura de funcoes
float mediaPeso(float a, float b);
float pesoArtigo(float a, int b);
float total(float a, float b);

///Funcao main e programa
int main()
{
	///Variaveis
	float art1, art2, peso1, peso2, totalPeso;
	int qtd1, qtd2,totalArtigos;
	///setlocale(LC_ALL, "Portuguese");

	printf("Introduza o peso do artigo 1: \n");
	fflush(stdin);
	scanf("%f", &art1);
	printf("Introduza a quantidade comprada do artigo 1: \n");
	fflush(stdin);
	scanf("%i", &qtd1);
	fflush(stdin);
	printf("Introduza o peso do artigo 2: \n");
	fflush(stdin);
	scanf("%f", &art2);
	printf("Introduza a quantidade comprada do artigo 2: \n");
	fflush(stdin);
	scanf("%i", &qtd2);
	peso1 = pesoArtigo(art1, qtd1);
	peso2 = pesoArtigo(art2, qtd2);
	totalPeso = total(peso1, peso2);
	totalArtigos = total(art1, art2);
	float media = mediaPeso(totalPeso, totalArtigos);
	printf("Resumo da sua compra: \n");
	printf("N Artigo \tTOTAL \t Peso(Un) \t Peso(Total) \n");
	printf("1 \t\t %i \t %.2f Kg \t %.2f Kg \n", qtd1, art1, peso1);
	printf("2 \t\t %i \t %.2f Kg \t %.2f Kg \n", qtd2, art2, peso2);
	printf("\t\t\t TOTAL \t\t %.2f Kg \n", totalPeso);
	printf("A media de peso dos %i artigos e de %.2f Kg. \n",totalArtigos, mediaPeso);
	system("pause");
}

#pragma region Funcoes
float mediaPeso(float a, float b)			///Calcula a media de pesos
{
	return (a / b);
}
float pesoArtigo(float a, int b)			///Calcula o total de peso de 1 artigo em relacao a qtd comprada
{
	return (a * b);
}
float total(float a, float b)				///Calcula o total de um determinado item
{
	return(a + b);
}
#pragma endregion