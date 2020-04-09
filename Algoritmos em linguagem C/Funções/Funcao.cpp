#include <stdio.h>
#include <stdlib.h>

void menu();
float ADD(float a, float b);
float SUB(float a, float b);
float MUL(float a, float b);
float DIV(float a, float b);

int main()
{
	int operacao;
	float x, y, result, c;

	printf("Digite um valor: ");
	scanf_s("%f", &x);
	while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado

	printf("Digite outro valor: ");
	scanf_s("%f", &y);
	while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado

	menu();
	scanf_s("%d", &operacao);
	while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado


	while ((operacao >= 1) && (operacao<=4))
	{
		switch (operacao)
		{
		case 1:
		{
			result = ADD(x,y);
			printf("O valor da soma foi %.2f", result);
			break;
		}
		case 2:
		{
			result = SUB(x,y);
			printf("O valor da subtracao foi %.2f", result);
			break;
		case 3:
		{
			result = MUL(x, y);
			printf("O valor da multiplicacao foi %.2f", result);
			break;
		}
		case 4:
		{
			result = DIV(x, y);
			printf("O valor da divisao foi %.2f", result);
			break;
		}
		}
		default:
			printf("Opcao invalida!");
			break;	
		}


		printf("\n");
		printf("Digite um valor: ");
		scanf_s("%f", &x);
		while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado


		printf("Digite outro valor: ");
		scanf_s("%f", &y);
		while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado

		menu();
		scanf_s("%d", &operacao);
		while ((c = getchar()) != '\n' && c != EOF) {}									// Limpar Buffer do teclado

	}

	system("pause");
	return 0;
}

void menu()
{
	printf("\n");
	printf("1 - Adicao        \n");
	printf("2 - Subtracao     \n");
	printf("3 - Multiplicao   \n");
	printf("4 - Divisao       \n");
	printf("Escolha operacao: \n");
	printf("\n\n");
}

float ADD(float a, float b)
{
	return a + b;
}

float SUB(float a, float b)
{
	return a - b;
}

float MUL(float a, float b)
{
	return a * b;
}

float DIV(float a, float b)
{
	return a / b;
}