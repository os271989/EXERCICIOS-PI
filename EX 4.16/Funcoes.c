#include <stdio.h>
#include "Funcoes.h"

int calcSoma(int x, int y);
float calcMedia(float x, int y);

int calcSoma(int x [], int size)
{
	int i, soma =0;
	for (i = 0; i < size; i++)
	{
		soma += x[i];
	}return soma;
}

float calcMedia(float x, int y)
{
	return (x / y);
}