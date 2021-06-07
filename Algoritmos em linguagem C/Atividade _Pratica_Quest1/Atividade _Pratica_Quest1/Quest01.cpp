/*Exerc�cio 1:
Uma certa empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou n�o do seu �ltimo produto lan�ado. 
Para isto, coletou o sexo do entrevistado e a sua resposta (sim ou n�o). Sabendo que foram entrevistadas 150 pessoas, fazer um algoritmo que calcule e mostre ao final:
� O n�mero de pessoas que responderam sim;
� O n�mero de pessoas que responderam n�o;
� A percentagem de pessoas do sexo feminino que responderam sim;
� A percentagem de pessoas do sexo masculino que responderam n�o;
Para a resposta SIM/N�O. Utilize uma vari�vel do tipo CHAR, que armazena S ou N, ou use uma vari�vel do tipo INT que armazena 1 (para SIM) e 2 (para N�O).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ENTREVISTADOS 3  //variavel constante

int main()
{
	int sn, sexo, qtd_Yes = 0, qtd_No = 0, qtdS_Fem = 0, qtdN_Mas = 0;		//Defini��o das variaveis
	float porcent_Masc, porcent_Femi;

	setlocale(LC_ALL, "portuguese");

	for (int i = 0; i <= ENTREVISTADOS; i++)		//La�o que vai se repetir 150 vezes
	{
		printf("Ol� cliente %d. Qual seu sexo (1 - Masculino | 2 - Feminino) \n", i);
		scanf_s("%d", &sexo);

		while ((sexo < 1) || (sexo > 2))
		{
			printf("Entrada inv�lida. Tente novamnete! \n");
			printf("Ol� cliente %d. Qual seu sexo (1 - Masculino | 2 - Feminino)", i);
			scanf_s("%d", &sexo);
		}

		printf("Gostou do nosso �ltimo produto? (1 - Sim | 2 - N�o) \n");
		scanf_s("%d", &sn);
		
		while ((sn < 1) || (sn > 2))
		{
			printf("Entrada inv�lida. Tente novamnete! \n");
			printf("Gostou do nosso �ltimo produto? (1 - Sim | 2 - N�o) \n");
			scanf_s("%d", sn);
		}

		if (sn == 1)
		{
			qtd_Yes++;
			if (sexo==2)
			{
				qtdS_Fem++;
			}
		}
		else
		{	
			qtd_No++;
			if (sexo==1)
			{
				qtdN_Mas++;
			}
		}
	}

	porcent_Femi = (float) qtd_Yes / ENTREVISTADOS;
	porcent_Masc = (float) qtd_No / ENTREVISTADOS;

	system("cls");

	printf("Numero de pessoas que respoderam sim............................: %d     \n", qtd_Yes);
	printf("Numero de pessoas que respoderam n�o............................: %d     \n", qtd_No); 
	printf("Porcentagem de pessoas do sexo feminino que responderam sim.....: %.2f%% \n", porcent_Femi * 100);
	printf("Porcentagem de pessoas do sexo masculino que responderam n�o....: %.2f%% \n", porcent_Femi * 100);

	system("pause");
	return 0;
}