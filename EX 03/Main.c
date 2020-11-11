#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

float alt = 7;
float lar = 5;
double hip;

int main()
{
	printf("Altura do triangulo: %.0f cm\n", alt);
	printf("Largura do triangulo: %.0f cm\n", lar);
	printf("Tendo em conta as dimensoes a area do triangulo e %.2f cm2.\n", (alt*lar)/2);
	hip = sqrt( (alt ^ 2) + (lar ^ 2));
	//printf("A Hipotenusa e igual a %.1f\n", hipotenusa());
	printf("Tendo em conta as dimensoes o perimetro do triangulo e %.2f cm.\n",alt + lar + hip);
	system("pause");

}
/*float hipotenusa(Lar,Alt)
{
	float hipotenusa = sqrt((Alt^2) + (Lar^2));
	return(hipotenusa);
}*/