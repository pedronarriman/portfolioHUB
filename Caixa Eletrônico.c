#include <stdio.h>

int main(){
	float saldo, valor;
	int opcao = 0;
	
	printf("digite o saldo inicial: ");
	scanf("%f", &saldo);
	
	while(opcao != 4) {
		printf("\n CAIXA ELETRONICO \n");
		printf(" 1 --> Consultar Saldo\n");
		printf(" 2 --> Sacar Valor\n");
		printf(" 3 --> Depositar Valor\n");
		printf(" 4 --> Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%i", &opcao);
		
		if(opcao == 1){
			printf("\nseu saldo atual eh de: R$ %f\n", saldo);
		}
		else if(opcao == 2) {
			printf("\ndigite o valor do saque: ");
			scanf("%f", &valor);
			if(valor > saldo) {
				printf("saldo insuficiente. \n");
			} else {
				saldo = saldo - valor;
				printf("Saque Realizado! \n");
			}
		}
		else if(opcao == 3) {
			printf("\ndigite o valor do deposito: ");
			scanf("%f", &valor);
			
			saldo = saldo + valor;
			printf("Deposito Realizado! \n");
		}
		else if(opcao == 4) {
			printf("\nEncerrando sistema...\n");
		}
		else {
			printf("Opcao Invalida.\n");
		}
		}
		return 0;
	}
