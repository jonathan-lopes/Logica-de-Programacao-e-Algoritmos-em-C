#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um valor qualquer. ou ZERO ou valor negativo para encerrar. \n");
    scanf_s("%d", &numero);

    while (numero > 0)
    {
        if (numero % 2 == 0)
        {
            printf("PAR! \n");
        }
        else
        {
            printf("IMPAR! \n");
        }
        
        printf("Digite um valor qualquer. ou ZERO ou valor negativo para encerrar. \n");
        scanf_s("%d", &numero);
    }

	system("PAUSE");
	return 0;
}