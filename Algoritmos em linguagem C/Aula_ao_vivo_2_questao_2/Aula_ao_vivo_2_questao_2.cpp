#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define TAMANHO_VETOR 101

int main()
{
	char frase[TAMANHO_VETOR];
	int tam;

	printf("Digite uma frase: ");
	gets_s(frase);		//LER STRING

	puts(frase);		//ESCREVER STRING

	tam = strlen(frase);

	if (tam > 50)
	{
		printf("Frase maior maior do que 50 caracteres. \n");
	}
	
	system("pause");
	return 0;
}