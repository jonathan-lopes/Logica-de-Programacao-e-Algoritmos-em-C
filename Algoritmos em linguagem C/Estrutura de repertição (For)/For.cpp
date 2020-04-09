#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero, vezes = 5;

    for (int i = 0; i < vezes; i++)
    {
        printf("Digite um valor qualquer: ");
        scanf_s("%d", &numero);


        if (numero % 2 == 0)
        {
            printf("PAR! \n");
        }
        else
        {
            printf("IMPAR! \n");
        }

    }

    system("PAUSE");
    return 0;
}