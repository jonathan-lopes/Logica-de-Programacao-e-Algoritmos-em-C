#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y, int z); //Prototipos

int main()
{
	int num1, num2, num3, c;

	printf("Digite o primeiro numero: ");
	scanf_s("%d", &num1);
	while((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado

	printf("Digite o segundo numero: ");
	scanf_s("%d", &num2);
	while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado

	printf("Digite o terceiro numero: ");
	scanf_s("%d", &num3);
	while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado



	printf("O maior valor foi %d \n", maior(num1,num2,num3));

	system("pause");

	return 0;
}

int maior(int x, int y, int z)
{

	if ((x >= y) && (x >= z))
	{
		return  x;
	}
	else
	{
		if ((y >= x) && (y >= z))
		{
			return  y;
		}
		else
		{
			return z;
		}
	}
}