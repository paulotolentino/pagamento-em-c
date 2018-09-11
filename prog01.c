#include <stdio.h>

int opcao(float valor){
	int escolha = 0;
	printf("Opcoes de pagamento\n");
	printf("1 - A vista (10%% de desconto)\n");
	printf("2 - Parcelado em 2x\n");
	if(valor > 100){
		printf("3 - Parcelado de 3 a 10\n\n");
		printf("Digite a opcao desejada: ");
		scanf("%d", &escolha);
		if(escolha >= 1 && escolha <= 3) return escolha;
		return -1;
	}
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &escolha);
	if(escolha >= 1 && escolha <= 2) return escolha;
	return -1;
}

void opcao1(float valor){
	printf("Valor a ser pago: R$ %.2f", valor - valor * 0.1);
}

void opcao2(float valor){
	printf("Valor de cada Parcela: R$%.2f\nValor total: R$%.2f", valor/2, valor);
}

void opcao3(float valor){
	int escolha = 0;
	printf("Insira o numero de parcelas (3 a 10): ");
	scanf("%d", &escolha);
	if(escolha >= 3 && escolha <= 10){
		float total = escolha*0.03*valor + valor;
		printf("Numero de parcelas: %d\nValor de cada Parcela: R$%.2f\n Valor Total: R$%.2f", escolha, total / escolha, total);
	} 
	else printf("Numero de parcelas invalido");
}

void main(void){
	int escolha;
	float valor;
	
	printf("Insira o valor total: R$");
	scanf("%f", &valor);
	
	escolha = opcao(valor);
	
	switch(escolha){
		case 1:
			opcao1(valor);
			break;
		case 2:
			opcao2(valor);
			break;
		case 3:
			opcao3(valor);
			break;
		default:
			printf("Opcao invalida");
	}
	printf("\n");
	system("pause");
}
