/*Exercício 2:
Para cada um dos consumidores de energia elétrica de uma cidade é informado o número da conta e o total de KW consumido no mês. Sabendo-se que o custo do KW é de R$ 1,75, fazer um algoritmo para:
• Armazenar e listar o número da conta, o total de KW consumidos e o valor a pagar de cada consumir cadastrado;
• Listar o número da conta, o total de KW consumidos e o valor a pagar do consumidor que mais gastou e o que menos gastou;
• Mostrar a média de consumo da cidade;
• Mostrar o número de consumidores que ultrapassaram o consumo de 170 KW;
Armazene as informações em estruturas de vetores e/ou matrizes.
Na tela, deve existir um MENU que pergunta ao usuário se ele deseja cadastrar um novo consumidor ou listar alguma informação (maior, menor, média, etc.).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 100

void menu();
void cadastro(int idCliente, int conta[], float kw[], float total[]);
void listar(int idCliente, int conta[], float kw[], float total[]);
void maior(int idCliente, int conta[], float kw[], float total[]);		//Prototipos das funcoes
void menor(int idCliente, int conta[], float kw[], float total[]);
void media(int idCliente, int conta[], float kw[], float total[]);
void maior_170(int idCliente, int conta[], float kw[], float total[]);

int main()
{
	int opcao, conta[TAM], idCliente = 0;		//Defenicao das variaveis
	float kw[TAM], total[TAM];
	
	setlocale(LC_ALL, "portuguese");

	menu();
	scanf_s("%d", &opcao);

	while ((opcao >= 1) && (opcao <= 6))
	{
		switch (opcao)
		{
		case 1: // Cadastro
		
			if (idCliente < TAM)
			{
				cadastro(idCliente, conta, kw, total);
				idCliente++;
			}
			else
			{
				printf("Total de cadastros excedidos! \n");
			}
			break;

		case 2: // Listagem
			listar(idCliente, conta, kw, total);

			break;

		case 3: // Maior consumo
			maior(idCliente, conta, kw, total);

			break;

		case 4: // Menor de consumo 
			menor(idCliente, conta, kw, total);

			break;

		case 5: // Media
			media(idCliente, conta, kw, total);

			break;

		case 6: // 170 KW 
			maior_170(idCliente, conta, kw, total);
			break;

		default:
			break;
		}
		menu();
		scanf_s("%d", &opcao);
	}

	system("pause");
	return 0;
}

void menu()
{
	printf("Digite o que você gostaria de fazer: \n");
	printf("1 - Para cadastra um cliente. \n");
	printf("2 - Listar clientes. \n");
	printf("3 - Cliente de maior consumo. \n");
	printf("4 - Cliente de menor consumo. \n");
	printf("5 - Média de consumo. \n");
	printf("6 - Cliente que consumiu mais de 170 KW. \n");
	printf("Digite qualquer outra tecla para sair. \n");
	printf("\n");

}

void cadastro(int idCliente, int conta[], float kw[], float total[])
{
	printf("Digite o número da conta: ");
	scanf_s("%d", &conta[idCliente]);
	printf("Digite o total de de KW: ");
	scanf_s("%f", &kw[idCliente]);
	printf("\n\n");
	total[idCliente] = kw[idCliente] * 1.75;

}

void listar(int idCliente, int conta[], float kw[], float total[])
{
	if (idCliente == 0)
	{
		printf("Nehum cadastro realizado! Cadastre antes de mostrar. \n\n");
	}
	else
	{
		for (int i = 0; i < idCliente; i++)
		{
			printf("Número da conta: %d \n", conta[i]);
			printf("Total de KW: %.2f \n", kw[i]);
			printf("Total gasto: %.2f \n", total[i]);
			printf("\n");
		}
	}

}

void maior(int idCliente, int conta[], float kw[], float total[])
{
	float maior; 
	int pos;

	if (idCliente == 0)
	{
		printf("Nehum cadastro realizado! Cadastre antes de mostrar. \n\n");
	}
	else
	{
		maior = total[0];
		pos = 0;
		for (int i = 0; i < idCliente; i++)
		{
			if (total[i] > maior)
			{
				maior = total[i];
				pos = i;
			}
			
		}

		printf("O clinete que mais consumiu gastou %2.f e contém o número da conta %d. \n\n", maior, conta[pos]);
	}

}

void menor(int idCliente, int conta[], float kw[], float total[])
{
	float menor;
	int pos;

	if (idCliente == 0)
	{
	printf("Nehum cadastro realizado! Cadastre antes de mostrar. \n\n");
	}
	else
	{
		menor = total[0];
		pos = 0;

		for (int i = 0; i < idCliente; i++)
		{	
			if (total[i] < menor)
			{
				menor = total[i];
				pos = i;
			}

		}

		printf("O clinete que menos consumiu gastou %2.f e contém o número da conta %d. \n\n", menor, conta[pos]);
	}

}

void media(int idCliente, int conta[], float kw[], float total[])
{
	float soma = 0;

	if (idCliente == 0)
	{
		printf("Nehum cadastro realizado! Cadastre antes de calcular a média. \n\n");
	}
	else
	{
		for (int i = 0; i < idCliente; i++)
		{
			soma =+ kw[i];
		}

		printf("A média de consumo foi de %.2f%%. \n\n", soma / idCliente);
	}

}

void maior_170(int idCliente, int conta[], float kw[], float total[])
{

	if (idCliente == 0)
	{
		printf("Nehum cadastro realizado! Cadastre antes de continuar. \n\n");
	}
	else
	{
		for (int i = 0; i < idCliente; i++)
		{
			if (kw[i] > 170)
			{
				printf("O clinete de conta %d consumiu %2.f. \n\n", conta[i], kw[i]);
			}
		}
	}
}