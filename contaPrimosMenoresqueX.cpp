//conte quantos primos são menores que x

#include<stdio.h>
#include<math.h>
#include<locale.h>

int geradorPrimos (int x){
	
	int d, i=2, primo, Mprimos=0;
	while(i<x){
		primo=0;
		for(d=1;d<=i;d++){
			if(i%d==0){
				primo++;
				
			}
		}
		if (primo ==2){
			Mprimos++;
			
	
			
		
	}
	i++;
  }
  	return Mprimos;
}
int main(){
	setlocale (LC_ALL, "portuguese");
	
	int X, primos; 
	 printf("Digite um número:");
	 scanf("%d", &X);
	 
    primos = geradorPrimos(X);
	 	printf("tem %d numeros primos menores que %d",primos,X);
	 	return 1;
	 
}
 

