#include <stdio.h>
#include <stdlib.h>

int main()
{

int num1, num2, soma, multiplicacao, divisao, subtracao;

printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);

soma = num1 + num2;
subtracao = num1 - num2;
multiplicacao = num1 * num2;
divisao = num1 / num2;

printf("A soma = %d \n", soma);
printf("A subtracao = %d \n", subtracao);
printf("A multiplicacao = %d \n", multiplicacao);
printf("A divisao = %d \n", divisao);

system("pause");
return 0;
}
