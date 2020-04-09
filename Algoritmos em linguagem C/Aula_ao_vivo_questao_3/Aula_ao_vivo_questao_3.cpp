#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int a, b, c, delta, x1, x2, C;
	
	setlocale(LC_ALL, "portuguese");

	printf("Digite o valor de A: \n");
	scanf_s("%d", &a);
	while((C =getchar()) != '\n' && C != EOF) {}
	printf("Digite o valor de B: \n");
	scanf_s("%d", &b);
	while ((C = getchar()) != '\n' && C != EOF) {}
	printf("Digite o valor de C: \n");
	scanf_s("%d", &c);
	while ((C = getchar()) != '\n' && C != EOF) {}
	
	delta = (b * b)- 4 * a * c;

	if (delta == 0)
	{
		x1 = -b / 2 * a;
		x2 = -b / 2 * a;
		printf("x1 x2 São respectivamente %d %d \n", x1, x2);
	}
	else 
	{
		if (delta > 0)
		{
			x1 = (-b + delta) / 2 * a;
			x2 = (-b - delta) / 2 * a;
			printf("x1 x2 São respectivamente %d %d \n", x1, x2);
		}
		else
		{
			printf("Delta caiu no campo de imaginários \n");
		}

	}
	
	system("pause");

	return 0;
}