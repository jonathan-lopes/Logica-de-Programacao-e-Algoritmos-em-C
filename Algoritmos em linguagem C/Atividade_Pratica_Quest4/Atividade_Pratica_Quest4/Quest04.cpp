/*Exercício 4:
Escrever uma função que receba como parâmetro duas strings, bem como um valor
inteiro que representa uma posição. A função deve, portanto, inserir a segunda string no
na posição indicada da primeira.
Escreva um programa que receba estas duas strings do usuário, o valor da posição
desejada, e chame a função anteriormente implementada e exiba o resultado ao usuário
na tela.
Para imprimir na tela e tirar o print screen, mostre o resultado utilizando o seu primeiro
nome como string 1 e o seu último nome como string 2, e a posição de teste deverá ser o
último digito do seu RU.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 40

void strcat_pos(char string1[], char string2[], char string_final[], int pos);

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string1[TAM], string2[TAM], string_final[TAM * 2] = {'\0'};
    int pos;

    printf("Digite seu nome: ");
    gets_s(string1);
    printf("Digite seu sobrenome: ");
    gets_s(string2);
    printf("Digite a posição desejada: ");
    scanf_s("%d", &pos);

    if (pos <= strlen(string1))
    {
        strcat_pos(string1, string2, string_final, pos);
    }
    else
    {
        strcat_s(string_final, string1);
        strcat_s(string_final, string2);
    }

    string_final[(strlen(string1) + strlen(string2))] = '\0';

    printf("Palavra final: \n");
    puts(string_final);

    system("pause");
    return 0;
}

void strcat_pos(char string1[], char string2[], char string_final[],int pos)
{
    int j;

    for (int i = 0; i < pos; i++)               // Colocar o começo da string 1
    {
        string_final[i] = string1[i];
    }
    j = 0;
    for (int i = pos; i < (strlen(string2) + pos); i++)        // Colocando a string 2 na posiçao desejada
    {
        string_final[i] = string2[j];
        j++;
    }
    j = pos;
    for (int i = (strlen(string2) + pos); i < (strlen(string1) + strlen(string2)); i++)
    { // Colocar o quer faltou da string 1
        string_final[i] = string1[j];
        j++;
    }
}
