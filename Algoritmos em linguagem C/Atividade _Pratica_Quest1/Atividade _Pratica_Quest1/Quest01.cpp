#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ENTREVISTADOS 150

int main()
{
	int sn, sexo, qtd_Yes = 0, qtd_No = 0, qtdS_Fem = 0, qtdN_Mas = 0;
	float porcent_Masc, porcent_Femi;

	setlocale(LC_ALL, "portuguese");

	for (int i = 0; i < ENTREVISTADOS; i++)
	{
		printf("Olá cliente %d. Qual seu sexo (1 - Masculino | 2 - Feminino) \n", i);
		scanf_s("%d", &sexo);

		while ((sexo < 1) || (sexo > 2))
		{
			printf("Entrada inválida. Tente novamnete! \n");
			printf("Olá cliente %d. Qual seu sexo (1 - Masculino | 2 - Feminino)", i);
			scanf_s("%d", &sexo);
		}

		printf("Gostou do nosso Último produto? (1 - Sim | 2 - Não) \n");
		scanf_s("%d", &sn);
		
		while ((sn < 1) || (sn > 2))
		{
			printf("Entrada inválida. Tente novamnete! \n");
			printf("Gostou do nosso Último produto? (1 - Sim | 2 - Não) \n");
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
	printf("Numero de pessoas que respoderam não............................: %d     \n", qtd_No); 
	printf("Porcentagem de pessoas do sexo feminino que responderam sim.....: %.2f%% \n", porcent_Femi * 100);
	printf("Porcentagem de pessoas do sexo masculino que responderam não....: %.2f%% \n", porcent_Femi * 100);

	system("pause");
	return 0;
}