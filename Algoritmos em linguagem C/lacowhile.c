#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num, cont = 1;
	
	printf("digite a quatidadde de loops desejada: ");
	scanf("%d", &num);
	
	printf("\n");
	
	while(cont<=num)
	{
		printf("Repetiu %d vez(es) \n", cont);
		cont++;
	}
		
	printf("\n");
	system("pause");
	return 0;
}
