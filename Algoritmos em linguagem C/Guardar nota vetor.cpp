#include <stdio.h>
#include <stdlib.h>

int main()
{

float nota[3];

printf("Digite a primeira nota: ");
scanf("%f", &nota[0]);
printf("Digite a segunda nota: ");
scanf("%f", &nota[1]);
printf("digite a terceira nota:");
scanf("%f", &nota[2]);

nota[3] = (nota[0] + nota[1] + nota[2]) / 3;

if (nota[3] >= 7)
{
	printf("APROVADO!! \n");
}
else
{
	printf("REPROVADO!! \n");
}

printf("A primeira nota = %.1f \n", nota[0]);
printf("A segunda nota = %.1f \n", nota[1]);
printf("A terceira nota = %.1f \n", nota[2]);

printf("A media das 3 notas = %1.f \n\n", nota[3]);

system("pause");
return 0;
}
