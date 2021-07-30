#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int sexo, altura, idade, refazer;
	float peso, tmb;
	
	do{
	system("cls");
	printf("CALCULADORA DE TAXA DE METABOLISMO BASAL\n");
	printf("Bem-vindo(a)! Para que eu possa calcular sua TMB\n");
	printf("você precisa me informar algumas coisas:\n\n");
	printf("Você é homem ou mulher?! \n(1) Homem \n(2) Mulher\n");
	scanf("%d", &sexo);
	
	printf("Informe sua idade.");
	scanf("%d", &idade);
	printf("Informe seu peso(Kg).");
	scanf("%f", &peso);
	printf("Informe sua altura(cm)");
	scanf("%d", &altura);
	
	switch(sexo){
		case 1: //Homem
			tmb = 66 + 13.7 * peso + 5 * altura - 6.8 * idade;
			printf("Sua taxa de metabolismo basal(TMB) é: %.2f\n", tmb);
			printf("\nVocê deseja refazer o teste? (1) SIM (2) NÃO -> ");
			scanf("%d", &refazer);
			break;
		case 2: //Mulher
			tmb = 665 + 9.6 * peso + 1.8 * altura - 4.7 * idade;
			printf("Sua taxa de metabolismo basal(TMB) é: %.2f\n", tmb);
			printf("\nVocê deseja refazer o teste? (1) SIM (2) NÃO -> ");
			scanf("%d", &refazer);
			break;	
		default: //Caso diferente
			sexo = -1;
			break;
	}	
	
	if(refazer == 1)
		refazer = -1;
	
	} while(sexo == -1 || refazer == -1);
	
	return 0;
}
