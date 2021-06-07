#include <stdlib.h>
#include <stdio.h>

#define TAMANHOVETOR 5

int main()
{
	int vet[TAMANHOVETOR] = { 0 };

	for (int i = 0; i < TAMANHOVETOR; i++)
	{
		printf("Digite um valor na posicao %d do vetor: \n", i);
		scanf_s("%d", &vet[i]);
	}
	
	printf("\n");

	printf("VETOR DIGITADO: \n");

	for (int i = 0; i < TAMANHOVETOR; i++)
	{
		printf("[%d] \t", vet[i]);
	}
	
	printf("\n\n");

	printf("VETOR INVERSO: \n");
	
	for (int i = TAMANHOVETOR -1; i >= 0; i--)
	{
		printf("[%d] \t", vet[i]);
	}
	
	printf("\n\n");

	system("pause");
	return 0;
}