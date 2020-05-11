/*Exercício 3:
	Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos
	elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos
	das diagonais principal e secundária são todas iguais. Dada uma matriz quadrada
	dimensão MxM, verifique se ela é um quadrado mágico através de um algoritmo.
	Exemplo de matriz quadrado mágico:

			[ 8 0 7 ]
			[ 4 5 6 ]
			[ 3 10 2]
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

#define DIMENSION 100

int main()
{	
	setlocale(LC_ALL, "portuguese");
	int matrix[DIMENSION][DIMENSION], tam;
	int somaDP = 0, somaDS = 0, somaL[DIMENSION] = { 0 }, somaC[DIMENSION] = { 0 };

	printf("Digite a dimensão da sua matriz: ");
	scanf_s("%d", &tam);

	while ((tam < 1) || (tam > DIMENSION))
	{
		printf("Entrada Invalida! \n");
		printf("Digite a dimensão da sua matriz: ");
		scanf_s("%d", &tam);
	}

	printf("\n DIGITE SUA MATRIZ: \n");      // Povoando a matriz

	for (int i = 0; i < tam; i++) // Linhas
	{
		for (int j = 0; j < tam; j++) //colunas
		{
			printf("Digite o valor de tam[%d][%d]:", i, j);
			scanf_s("%d", &matrix[i][j]);
		}
	}

	printf("\n MATRIZ DIGITADA: \n");    

	for (int i = 0; i < tam; i++) 
	{
		for (int j = 0; j < tam; j++) 
		{
			printf("[%d] ",matrix[i][j]);
		}
		printf("\n");
	}

	// Somas DP e DS

	for (int i = 0; i < tam; i++)   // Diagonal Principal
	{
		for (int j = 0; j < tam; j++)
		{
			if (i == j)
			{
				somaDP += matrix[i][j];
			}
			if ((i + j) == (tam - 1))					// Diagonal Segundaria
			{
				somaDS += matrix[i][j];
			}
		}
	}

	// Soma Linhas
	
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			somaL[i] += matrix[i][j];
		}
	}

	// Soma Colunas

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			somaC[j] += matrix[i][j];
		}
	}

	if (somaDP == somaDS)
	{
		
		for (int i = 1; i < tam; i++)
		{
			if (somaL[0] != somaL[i])
			{
				printf("Não é um quadrado mágico! \n");
				return 0;
			}
		}

		for (int i = 1; i < tam; i++)
		{
			if (somaC[0] != somaC[i])
			{
				printf("Não é um quadrado mágico! \n");
				return 0;
			}
		}
		if ((somaL[0] == somaC[0]) && (somaL[0] == somaDP))
		{
			printf("Matriz é um quadrado mágico \n");
		}
		else
		{
			printf("Não é um quadrado mágico! \n");
		}
	}
	else 
	{
		printf("Não é um quadrado mágico! \n");
	}

	system("pause");
	return 0;
}