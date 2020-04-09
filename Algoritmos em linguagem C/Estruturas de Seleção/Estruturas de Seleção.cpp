// Estruturas de Seleção.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Exercio de seleçao simples e composta
// mod em c nao funciona tem que utilizar % para fazer divisao do resto

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero;

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
    
    system("pause");
    return 0;
}