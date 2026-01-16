#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL, "portuguese");
	
	float ProdutoPreco, Quantidade, ValorRecebido, ValorTotal, Falta, Troco;
	
	printf("Digite o preço unitário: \n");
	scanf("%f", &ProdutoPreco);
	
	printf("Digite a quantidade: \n");
	scanf("%f", &Quantidade);
	
	printf("Digite o valor recebido do cliente: \n");
	scanf("%f", &ValorRecebido);
	
	ValorTotal = Quantidade * ProdutoPreco;
	
	if(ValorTotal < ValorRecebido){
	Troco =  ValorRecebido - ValorTotal;
	
	printf("Obrigado pela compra :) o seu troco é:%.2f", Troco);
}
	else if(ValorRecebido < ValorTotal){
		
		Falta = ValorTotal - ValorRecebido;
		printf("Valor recebido é menor que o valor da compra! Avise ao cliente que falta: %.2f \n",Falta);	 
		
	}else{
		printf("Não resta troco! Obrigado pela compra :)");
	}
}
