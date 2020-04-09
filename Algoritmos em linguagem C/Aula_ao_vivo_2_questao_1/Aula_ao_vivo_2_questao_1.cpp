#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>

int main()
{	
	int x, chute, tentativas = 1;

	setlocale(LC_ALL, "portuguese");

	srand(time(NULL));
	
	x = (rand() % 100) + 1;

	printf("tente advinhar! Digite um valor entre 1 até 100: \n");
	scanf_s("%d", &chute);

	while ((chute != x) && (tentativas < 5))
	{
		if (chute < x)
		{
			printf("Um pouco mais \n");
		}
		else
		{
			printf("Um pouco menos \n");
		}

		printf("tente advinhar! Digite um valor entre 1 até 100: \n");
		scanf_s("%d", &chute);
		tentativas++;
	}

	system("cls");

	if (tentativas < 5)
	{
		printf("Parabéns, o sorteado era %d \n\n", x);
	}
	else
	{
		printf("Você perdeu Otario!! o numero era %d \n\n", x);
	}

	system("pause");
	return 0;
}