//FUPQ escreva os Ns primeiros números naturais e classifique-os entre defectivos, perfeitos e abundantes 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int n,d, i, soma;
	
	printf("Digite a quantidade de números naturais que você quer: \n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		soma = 0; 
		for(d=1;d<i;d++){
			if(i%d==0){
				soma = soma + d;	
			}
		}
			if(soma>i){
				printf(" \n %d É abundante", i);
			}
			else if(soma==i){
				printf(" \n %d É perfeito", i);
						
			}
			else{
				printf(" \n %d É defectivo", i);
			}		
				
		
	}
}
