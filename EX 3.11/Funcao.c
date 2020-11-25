#include "Funcao.h"

int calculoMaior(int n1, int n2, int n3)
{
	if (n1 > n2 && n2 > n3)
	{
		return(n1);
	}if (n1 < n2 && n2 > n3)
	{
		return(n2);
	}if (n1 < n2 && n3 > n2)
	{
		return(n3);
	}
}
