/*****************************************************************//**
 * \file       Main.c
 * \brief      4.17 -Solicite ao utilizador n valores ate linha em branco, e indique qual o valor total da sua soma e a media.
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       27 November 2020
 *********************************************************************/


///Pragma warning --> Forma de anula o erro de leitura para scanf
/// stdio.h --> 'Biblioteca' de funcoes input/output
/// stdlib.h --> 'Biblioteca para permitir chamar funcao system
/// "Funcoes.h" --> Linha de cabecalho para poder chamar funcao criada em outro ficheiro ".c"

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/// VARIAVEIS
/// <valor> Recebe o valor introduzido pelo utilizador
/// <soma> Somatorio de todos os valores inseridos
/// <i> Contador para o numero de repeticoes do ciclo
/// <media> Valor medio dos valores inseridos


int valor, soma, i = 0;
float media;
char entrada[3];

/**
 * main:
 * Ciclo while para pedir um numero inteiro ate inserir linha em branco
 * Soma e media vao receber o resultado das funcoes previamente criadas segundo valores introduzidos
 * Incrementacao do contador ao fim do ciclo e 'reset' da variavel <valor> ao fim do ciclo
 * Limpeza do buffer
 */

int main()
{
	while (valor)
	{
		printf("Introduza o %i numero inteiro: \n", i + 1);
		scanf("%s %i", &entrada, &valor);
		soma = calcSoma(valor, soma);
		media = calcMedia(soma, 10);
		i++;
		valor = 0;
		fflush(stdin);

	}
	/// Mostra o numero de valor introduzidos pelo utilizador
	/// Mostra o somatorio e a media de todos os valores
	
	
	printf("Introduziu %i valores. \n", i);
	printf("A soma total dos valores introduzidos e %i resultando numa media de %.2f. \n", soma, media);
	system("Pause");

}