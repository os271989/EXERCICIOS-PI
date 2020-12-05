/*****************************************************************//**
 * \file   Main.c
 * \brief  c)Implemente a fun��o calculaMediaTresValores com valores lidos
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/

#pragma warning (disable: 4996)	//Desactiva o erro de leitura da fun��o scanf
#include <stdio.h>		//Permite utilizar todas as fun��es input/output
#include "Funcoes.h"	//Ficheiro de cabe�alho criado com assinaturas das fun��es criadas permitindo recorrer a elas
 ///Defini��o de constante MAX para limite de valores a introduzir
#define MAX 3			

 /**
  * main:
  * Funcao que pede x valores e recorre a fun��o externa para calcular a media de todos os valores
  * Mostra ao utilizador os valores lidos, a soma e a media deles todos
  */

int main()
{
	/// Array valores --> Contem x valores lidos
	/// Variaveis:
	/// i -> controla os ciclos
	/// media -> recorre a fun��o externa para receber a media dos valores lidos
	/// soma -> recorre a fun��o externa para receber a soma dos valores lidos
	float valores[MAX];
	int i;
	float media, soma;

	/// Ciclo for: --> Pede ao utiizador um valor at� atingir o limite de valores estabelecido no programa (MAX)
	/// Atribui o valor introduzido � respectiva posi��o no Array valores
	for (i = 0; i < MAX; i++)
	{
		printf("Introduza o VALOR%i: \n", i + 1);
		scanf("%f", &valores[i]);
	}

	soma = calculaSoma(valores, 3);
	media = calculaMedia(soma, 3);

	/// Ciclo para mostrar todos os valores do Array
	/// Ap�s terminar ciclo mostra a soma de todos os valores e a sua m�dia
	for (i = 0; i < 3; i++)
	{
		printf("VALOR%i --> %-.2f \n", i + 1, valores[i]);
	}printf("TOTAL --> %3.2f \n", soma);
	printf("MEDIA --> %3.2f \n", media);

}