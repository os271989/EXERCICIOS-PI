/*****************************************************************//**
 * \file   EX 4.2.c
 * \brief  Resolucao exercicio 4.2 FE01
 * \Email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   31 October 2020
 *********************************************************************/

/**
 * Introducao da funcao principal
 */
int main()
{
	int num1;
	printf ("Introduza um numero inteiro: \n");
	scanf_s ("%i", &num1);
	printf("O numero introduzido foi o %i \n", num1);
	printf("O seu antecessor e o %i \n", num1 - 1);
	printf("O seu sucessor e o %i \n", num1 + 1);
	getchar();
}