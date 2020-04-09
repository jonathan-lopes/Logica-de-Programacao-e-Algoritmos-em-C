#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//media nota

int main() 
{
	float nota1, nota2, media;
	
	printf("digite a primeira nota: ");
	scanf_s("%f", &nota1);
	printf("digite a segunda nota: ");
	scanf_s("%f", &nota2);
	
	media = (nota1 + nota2) / 2;

	printf("Sua media foi %.1f \n", media);	
	
	if (media >= 7)
		printf("Voce esta aprovado! \n");
	
	else
		printf("Voce esta reprovado! \n");
		
	system("pause");
	return 0;
}
