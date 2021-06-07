#include <stdio.h>
#include <stdlib.h>

int main()
{
int matriz[2][2], l, c;

for(l = 0; l < 2; l++)
	for( c = 0; c < 2; c++)
{
		printf("Digite numero do elemento[%d][%d]: ", l,c);
		scanf("%d", &matriz[l][c]);
}
	
		
printf("\n Os numeros digitados:\n");
printf("\n");

for(l = 0;l < 2; l++)
{
	for(c = 0; c < 2; c++)
	printf("%d ", matriz[l][c]);
	printf("\n");
}

printf("\n");
system("pause");
return 0;
}
