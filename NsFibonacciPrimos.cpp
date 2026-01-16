//escreva os Ns primeiros termos de fibonacci primos
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, a=1, b=0,c, cont=0, primo, i;
	
	printf("Digite a quantidade de fibonacci que você quer: \n");
	scanf("%d", &n);
	
	while(cont<n){
		
		c = a + b;
		a = b;
		b = c;
		
	primo=0;
	
	for(i=1;i<=c;i++){
		
		if(c%i == 0){
		primo++;
           }
	    }
	    
	if(primo == 2){
	
	printf("\n %d", c);
	cont++;
	
  }
 }	
}
