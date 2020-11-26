#include "Funcao.h"
#include <stdio.h>
#include <string.h>

void calcMaior(char p1 [20], char p2[20]);

void calcMaior(char p1 [20], char p2 [20])
{
	int comp = strcmp(p1, p2);
	char maior[20];

	if (comp > 0)
	{
		strcopy(maior,p1);
	}
	if (comp < 0)
	{
		strcopy(maior, p2);
	}
}
