/*****************************************************************//**
 * \file   Main.c
 * \brief  c)Implemente a função calculaMediaTresValores com valores lidos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

#pragma warning (disable: 4996)	//Desactiva o erro de leitura da função scanf
#include <stdio.h>		//Permite utilizar todas as funções input/output
#include "Funcoes.h"	//Ficheiro de cabeçalho criado com assinaturas das funções criadas permitindo recorrer a elas
 ///Definição de constante MAX para limite de valores a introduzir
#define MAX 3			

 /**
  * main:
  * Funcao que pede x valores e recorre a função externa para calcular a media de todos os valores
  * Mostra ao utilizador os valores lidos, a soma e a media deles todos
  */

int main()
{
	/// Array valores --> Contem x valores lidos
	/// Variaveis:
	/// i -> controla os ciclos
	/// media -> recorre a função externa para receber a media dos valores lidos
	/// soma -> recorre a função externa para receber a soma dos valores lidos
	float valores[MAX];
	int i;
	float media, soma;

	/// Ciclo for: --> Pede ao utiizador um valor até atingir o limite de valores estabelecido no programa (MAX)
	/// Atribui o valor introduzido á respectiva posição no Array valores
	for (i = 0; i < MAX; i++)
	{
		printf("Introduza o VALOR%i: \n", i + 1);
		scanf("%f", &valores[i]);
	}

	soma = calculaSoma(valores, 3);
	media = calculaMedia(soma, 3);

	/// Ciclo para mostrar todos os valores do Array
	/// Após terminar ciclo mostra a soma de todos os valores e a sua média
	for (i = 0; i < 3; i++)
	{
		printf("VALOR%i --> %-.2f \n", i + 1, valores[i]);
	}printf("TOTAL --> %3.2f \n", soma);
	printf("MEDIA --> %3.2f \n", media);

}