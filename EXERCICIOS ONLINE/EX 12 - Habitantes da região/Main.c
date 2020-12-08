/*****************************************************************//**
 * \file   Main.c
 * \brief  12) Ler dados de habitantes de uma regi�o e mostrar: Habitantes, M�dia de idades, +Velho e +Novo,
 *  numero de mulheres na regi�o, nome idade e sexo da pessoa com sal�rio mais baixo.
 * \email  a20844@alunos.ipca.pt
 * \author Oscar Araujo
 * \date   8 December 2020
 *********************************************************************/

#include "Funcoes.h"

int main()
{
	habitantes habitante[3];
	int i, nMulheres = 0;
	float media;
	habitantes pobre;
	#define HAB 3
	setlocale(LC_ALL, "");

	while (i < HAB)
	{	
		printf("%d� Habitante: \n", i + 1);
		printf("NOME: ");
		scanf("%s", habitante[i].nome);
		printf("IDADE: ");
		scanf("%d", &habitante[i].idade);
		printf("SEXO [f/m]: ");
		scanf("%s",&habitante[i].sexo);
		printf("SAL�RIO: ");
		scanf("%f", &habitante[i].salario);
		i++;
		//fflush(stdin);

	}mostraHabitantes(habitante, HAB);
	media = calculaMedia(habitante, HAB);
	printf("A m�dia de idades da regi�o � de %.1f anos. \n", media);
	maiorMenorIdade(habitante, HAB);
	nMulheres = numeroMulheres(habitante, HAB);
	printf("Na regi�o temos %d Mulheres. \n", nMulheres);
	//maisPobre(habitante, HAB);
	pobre = maisPobre(habitante, HAB);
	printf("O habitante com o sal�rio mais baixo � o %s com %.2f euros por m�s. \n", pobre.nome, pobre.salario);
}