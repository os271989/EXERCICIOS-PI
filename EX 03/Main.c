#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

float Alt = 7;
float Lar = 5;

int main()
{
	printf("Altura do triangulo: %.0f cm\n", Alt);
	printf("Largura do triangulo: %.0f cm\n", Lar);
	printf("Tendo em conta as dimensoes a area do triangulo e %.2f cm2.\n", (Alt*Lar)/2);
	printf("A Hipotenusa e igual a %.1f\n", hipotenusa());
	printf("Tendo em conta as dimensoes o perimetro do triangulo e %.2f cm.\n",Alt + Lar + hipotenusa());
	system("pause");

}
/*float hipotenusa(Lar,Alt)
{
	float hipotenusa = sqrt((Alt^2) + (Lar^2));
	return(hipotenusa);*/
}