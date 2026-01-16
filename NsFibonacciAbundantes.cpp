//Escreva os Ns primeiros termos de fibonacci que são abundantes 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int d,n,soma, cont=0, a=1,b=0,c;
	
	printf("Digite a quantidade de fibonacci abundantes que você quer: \n");
	scanf("%d", &n);
	
	
	while(cont<n){
		
		c = a + b;
		a = b;
		b = c;
		
		soma = 0;	
	for(d=1;d<c;d++){
		if(c%d==0){
		
		soma = soma + d;
	}	
 }
 if(soma>c){
 	printf("\n %d", c);
 	cont++;
 }
}
}

