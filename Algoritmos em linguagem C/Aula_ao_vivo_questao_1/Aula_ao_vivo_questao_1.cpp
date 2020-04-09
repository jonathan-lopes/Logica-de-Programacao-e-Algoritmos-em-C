#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float conta, multa;
    int dia, c;

    setlocale(LC_ALL, "portuguese");
    
    printf("Qual o valor da conta a ser paga: \n");
    scanf_s("%f", &conta);
    while ((c = getchar()) != '\n' && c != EOF) {}
    printf("Quantos dias você atrasou: \n");
    scanf_s("%d", &dia);
    while ((c = getchar()) != '\n' && c != EOF) {}
    
    while (dia <= 0)
    {
       printf("Digite o numero de dias diferentes de zero: \n");
       scanf_s("%d", &dia);
       while ((c = getchar()) != '\n' && c != EOF) {}
    }

    multa = conta * 0.02 * (float)dia;

    system("cls");

    printf("O valor da sua conta.................: R$ %.2f   \n", conta);
    printf("Numero de dias que esta atrasado.....: %d dias   \n", dia);
    printf("O desconto de foi....................: R$ %.2f   \n", multa);
    printf("Valor da conta com a multa...........: R$ %.2f   \n\n", conta + multa);

    system("pause");
    return 0;
}