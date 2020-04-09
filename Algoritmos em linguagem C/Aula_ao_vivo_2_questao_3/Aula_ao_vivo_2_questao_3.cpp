#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	char palavra[20];
	int tam;

	printf("Digite uma palavra: ");
	gets_s(palavra);

	tam = strlen(palavra);

	while (tam > 10)
	{
		printf("Palavra maior do que 10 caracteres. Digite outra palavra: ");
		gets_s(palavra);
	}

	strcat_s(palavra, " UNINTER");
	puts(palavra);

	system("pause");
	return 0;
}