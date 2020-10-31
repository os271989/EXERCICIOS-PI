/*****************************************************************//**
 * \file   EX 4.1.c
 * \brief  Resolucao Exercicio 4.1 FE01
 * \Email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   31 October 2020
 *********************************************************************/

/**  Incluir Bibiloteca stdio/locale -> Ficheiros input/output + Correcao de escrita portugues*/
#include<stdio.h>
#include<locale.h>

/**
 * Funcao Principal do programa
 */
int main()			

/**
 * Declaracao de variaveis para leitura e calculo da media.
 */
{
	int math, port, eng;
	float media;
	setlocale(LC_ALL, "Portuguese");

	printf("Introduza a nota da disciplina de Matemática:\n");			///<Indicar para introduzir as notas
	scanf_s("%i", &math);
	printf("Introduza a nota da disciplina de Português:\n");			
	scanf_s("%i", &port);
	printf("Introduza a nota da disciplina de Inglês:\n");
	scanf_s("%i", &eng);
	media = (math + port + eng) / 3;									///<Calcular Media
	printf("Os resultados do aluno são os seguintes: \n");
	printf("Matemática \t %i \n", math);
	printf("Portugês \t %i \n", port);
	printf("Inglês \t\t %i \n", eng);
	printf("Média Final \t %.2f \n", media);
	getchar();

}