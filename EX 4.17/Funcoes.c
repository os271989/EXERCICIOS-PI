#include <stdio.h>
#include "Funcoes.h"

int calcSoma(int x, int y);
float calcMedia(float x, int y);

/**
 * calcSoma
 * Funcao para somar todos os valores que utilizador introduziu
 * \param x --> ira receber o valor da variavel soma
 * \param y --> ira receber o valor introduzido pelo utilizador
 * \return  --> ira devolver a soma dos dois valores
 */

int calcSoma(int x, int y)
{
	return(x + y);
}

/**
 * calcMedia
 * Funcao para calcular a o valor medio de todos os valores introduzidos
 * \param x --> Recebe o somatorio de todos os valores inseridos
 * \param y --> Recebe o numero total de valores inseridos
 * \return  --> Devolve a media entre os dois valores
 */

float calcMedia(float x, int y)
{
	return (x / y);
}