/*****************************************************************//**
 * \file   Funcoes.h
 * \brief  Ficheiro de cabeçalho para interligar funções auxiliares com função main,incluir bibliotecas, e tipos de dados
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/
#define MAX 10


#pragma region typedef struct Habitantes
typedef struct habitantes {
	char nome[MAX];
	int idade;
	char sexo[2];
	float salario;

}habitantes;

#pragma endregion

#pragma region Assinatura Funções
#ifndef Funcoes
#define Funcoes
habitantes mostraHabitantes(habitantes x[], int size);
float calculaMedia(habitantes x[], int size);
void maiorMenorIdade(habitantes x[], int size);
int numeroMulheres(habitantes x[], int size);
habitantes maisPobre(habitantes x[], int size);




#endif // !Funcoes

#pragma endregion

#pragma region Inclusao Bibliotecas
#include <stdio.h>
#include <string.h>
#include <locale.h>
#pragma warning (disable: 4996)


#pragma endregion