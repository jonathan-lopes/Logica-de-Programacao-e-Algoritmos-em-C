#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3

int main()
{	
	int mat[LINHAS][COLUNAS] = { 0 };

	for ( int i = 0; i < LINHAS; i++)
	{
		for ( int j = 0; j < COLUNAS; j++)
		{
			printf("Digite um valor para a posicao %d,%d da matriz: \n", i, j);
			scanf_s("%d", &mat[i][j]);
		}
	}

	printf("MATRIZ DIGITADA: \n\n");

	for (int i = 0; i < LINHAS; i++)
	{
		for (int j = 0; j < COLUNAS; j++)
		{
			printf("[%d] \t", mat[i][j]);	
		}
		
		printf("\n");
	}

	printf("\n\n");

	printf("DIAGONAL PRINCIPAL DA MATRIZ: \n\n");

	for (int i = 0; i < LINHAS; i++)
	{														/*Para calcular a matriz diagonal pricincipal é 
															so saber que linha tem que ser igual a coluna*/		
		for (int j = 0; j < COLUNAS; j++)
		{
			if (i == j)
			{
				printf("[%d] \t", mat[i][j]);
			}
		}
	}

	printf("\n\n");

	printf("MATRIZ TRIANGULAR INFERIOR: \n\n");

	for (int i = 0; i < LINHAS; i++)						/*Para calcular a matriz triangular inferior basta saber
															que a linha tem que ser maior que a coluna*/
	{
		for (int j = 0; j < COLUNAS; j++)
		{
			if (i < j)										
			{
				printf("[%d] \t", mat[i][j]);
			}
		}
	}

	printf("\n\n");

	printf("MATRIZ TRIANGULAR SUPERIOR: \n\n");

	for (int i = 0; i < LINHAS; i++)
	{
		for (int j = 0; j < COLUNAS; j++)					/*Para calcular a matriz triangular superior basta saber
															que a linha tem que ser menor que a coluna*/
		{
			if (i > j)
			{
				printf("[%d] \t", mat[i][j]);
			}
		}
	}

	printf("\n\n");

	printf("DIAGONAL SEGUNDARIA DA MATRIZ: \n\n");

	for (int i = 0; i < LINHAS; i++)
	{
		for (int j = 0; j < COLUNAS; j++)					
		{
			if (i != j) 
			{
				printf("[%d] \t", mat[2][0]);
				printf("[%d] \t", mat[0][2]);
			}
				
			else if (i == j)
				printf("[%d] \t", mat[1][1]);
		}
		
		printf("\n");
	}

	printf("\n\n");

	system("pause");

	return 0;
}