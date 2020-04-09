#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_VET 80

int main()
{
	int vet[TAM_VET], menor;
	
	srand(time(NULL));

	for (int i = 0; i < TAM_VET; i++)		// Sotear numeros aleatorios no meu vetor
	{
		vet[i] = rand() % 100;
	}
	
	for (int i = 0; i < TAM_VET; i++)
	{		
		printf("%d ", vet[i]);				// Imprimir meu vetor
	}
	
	menor = vet[0];

	for (int i = 1; i < TAM_VET; i++)
	{
		if (vet[i] < menor)
		{
			menor = vet[i];
		}
	}

	printf("\n\n O menor valor eh: %d \n\n", menor);

	system("pause");
	return 0;
}