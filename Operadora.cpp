#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL, "portuguese");
	
	float MinConsumidos, valor, valorTotal;
	
	printf("Digite a quantidade de minutos consumidos: \n");
	scanf("%f", &MinConsumidos);
	
	if(MinConsumidos<=100){
		printf("O valor a ser pago é 100 REAIS");
	}
	else{
		printf("Ultrapassou os 100 minutos!");
		valor = MinConsumidos - 100;
		valorTotal= (valor * 2.00)+ 50.0;
		printf("O valor a ser pago é: %.2f", valorTotal);
	}
}
