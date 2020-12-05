/*****************************************************************//**
 * \file   Auxiliares.h
 * \brief  Ficheiro de cabeçalho para interligar função main a funções/ciclos criados em outros ficheiros
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   5 December 2020
 *********************************************************************/
#pragma once
#include <locale.h>
#pragma warning (disable: 4996)

///Assinatura das funções/ciclos criados em outro ficheiro '.c'
#ifndef Funcoes
#define Funcoes
void mostraArray(int x[], int size);
float resultado(int x[], int size);

//void mostraOperadores(char* x, int size);

#endif // Funcoes

///Tentativa de trabalhar com uma estrutura de operadores
#pragma region StructOperadores

/*typedef struct Operadores {
	char simbolo[1];
	char nome[20];
}Operadores;



#pragma endregion*/

#pragma endregion
