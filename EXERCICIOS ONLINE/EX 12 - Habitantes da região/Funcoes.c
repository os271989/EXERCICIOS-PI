/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funções a ser chamadas na função main
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include "Funcoes.h"
#include <string.h>
/**
 * mostraHabitantes:
 * Função para mostrar todos os elementos do Array habitante
 * \param x -->Recebe Array do tipo habitantes(typedef struct)
 * \param size -->Recebe tamanho do Array
 * \return -->Não devolve nada pois é uma função para mostrar valores
 */

habitantes mostraHabitantes(habitantes x[], int size)
{
	int i = 0;
	setlocale(LC_ALL, "");

	printf("========== HABITANTES ========== \n");
	printf("NOME \t\t IDADE \t SEXO \t SALÁRIO \n");
	while (i < size)
	{
		printf("%-10s \t  %-3d \t  %s \t %-4.2f \n", x[i].nome, x[i].idade, x[i].sexo, x[i].salario);
		i++;
	}
}

/**
 * calculaMedia:
 * Função que recebe o Array e calcula a media entre os valores de um tipo
 * \param x -->Recebe Array do tipo habitantes(typedef struct)
 * \param size -->Recebe tamanho do Array
 * \return -->Devolve a média dos valores no Array.idade
 */
float calculaMedia(habitantes x[], int size)
{
	float soma = 0;
	for (int i = 0; i < size; i++)
	{
		soma += x[i].idade;
	}return(soma / size);
}

/**
 * maiorMenorIdade:
 * Funcão que analisa o Array de todos os habitantes e indica o nome e idade do +Novo e +Velho
 * \param x -->Recebe Array do tipo habitantes
 * \param size -->Recebe tamanho do Array
 */

void maiorMenorIdade(habitantes x[], int size)
{
	int iMaior, iMenor;
	char nMaior[MAX];
	char nMenor[MAX];
	setlocale(LC_ALL, "");

	iMaior = x[0].idade;
	strcopy(nMaior,x[0].nome);
	iMenor = x[0].idade;
	strcopy(nMenor, x[0].nome);

	for (int i = 1; i < size;i++)
	{
		if (x[i].idade > iMaior)
		{
			iMaior = x[i].idade;
			strcopy(nMaior, x[i].nome);
		}
		if (x[i].idade < iMenor)
		{
			iMenor = x[i].idade;
			strcopy(nMenor, x[i].nome);
		}
	}
	printf("O habitante Mais Novo é o %10s com %3d anos, e o Mais Novo é o %10s com %3d anos.", nMaior, iMaior, nMenor, iMenor);

}

/**
 * numeroMulheres:
 * Função que analisa os dados do Array habitante, contabiliza e mostra quantas mulheres existem.
 * \param x -->Recebe Array do tipo habitantes
 * \param size -->Recebe tamanho do Array
 * \return -->
 */

int numeroMulheres(habitantes x[], int size)
{
	int i, mulheres = 0;
	while (i < size)
	{
		if (x[i].sexo == 'f')
		{
			mulheres++;
		}
	}return mulheres;
}

/**
 * maisPobre:
 * Função que recebe um Array do tipo habitantes e analisa os valores dos salário á procura do que tem salátio +baixo
 * \param x -->Recebe Array do tipo habitantes
 * \param size -->Recebe o tamanho do Array
 */

habitantes maisPobre(habitantes x[], int size)
{
	float pobre = x[0].salario;
	int nPobre = 0;

	for (int i = 1; i < size; i++)
	{
		if (x[i].salario < pobre)
		{
			pobre = x[i].salario;
			nPobre = i;
		}
	}//printf("O habitante com salário mais baixo é o %s com um salário de %.2f euros", x[nPobre].nome, pobre);
	return x[nPobre];
}