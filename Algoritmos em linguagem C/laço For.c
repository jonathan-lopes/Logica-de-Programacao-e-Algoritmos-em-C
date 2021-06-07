#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num;
	
	printf("digite a quatidadde de loops desejada: ");
	scanf("%d", &num);
	
	printf("\n");
	
for (int i = 1; i<=num; i++)
{
	printf("Repetiu %d vez(es) \n", i);
}
		
	printf("\n");
	
	system("pause");
	return 0;
}
