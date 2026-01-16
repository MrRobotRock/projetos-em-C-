// escreva os ns primeros termos de fibonacci primos

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int  n, a=1, b=0,c,i, primo, cont=0 ;
	
	printf("DIGITE UM NÚMERO DE TERMOS QUE VOCÊ QUER DA SEQUENCIA DE FIBONACCI:\n");
	scanf("%d", &n);
	if(n<0){
	 	printf("Digite um número válido");
	 	
	 	return 0;
		 }
	 	
	 while(cont < n){        
        c = a + b;
        a = b;
        b = c;

        primo = 0;
	 		
	 		for(i=1;i<=c;i++){
	 			if(c%i==0){
	 				
	 				primo++;
	 			}
	 		}
	 		
	 			if(primo==2){
					printf("\n %d \n ",c);
					cont++;
	 			}	
		 }
	}
	

		 
		 
