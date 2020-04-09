#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int  cedulas100, cedulas50, cedulas10, cedulas5, cedulas1, saque;
	
	setlocale(LC_ALL, "portuguese");

	printf("Digite o valor do saque: ");
	scanf_s("%d", &saque);

	cedulas100 = saque / 100;
	saque = saque - (cedulas100 * 100);		//Refazer com MOD (resto) da divisao	

	cedulas50 = saque / 50;
	saque = saque - (cedulas50 * 50);

	cedulas10 = saque / 10;
	saque = saque - (cedulas10 * 10);

	cedulas5 = saque / 5;
	saque = saque - (cedulas5 * 5);

	cedulas1 = saque;
	
	printf("Cedulas de R$ 100: %d. \n", cedulas100);
	printf("Cedulas de R$ 50: %d. \n", cedulas50);
	printf("Cedulas de R$ 10: %d. \n", cedulas10);
	printf("Cedulas de R$ 5: %d. \n", cedulas5);
	printf("Cedulas de R$ 1: %d. \n", cedulas1);
	
	system("pause");
	return 0;
}