//verifica se um número está na sequencia  fibonacci e em qual ordem esse numero esta

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int  n, a=1, b=0,c, pos=1;
	
	printf("DIGITE UM NÚMERO PARA SABER SE ESTÁ NA SEQUENCIA DE FIBONACCI:\n");
	scanf("%d", &n);
	if(n<0){
	 	printf("Digite um número válido");
	 	 
	 	return 0;}
	 	
	 	do{
	 		c =a+b;
	 		a=b;
	 		b=c;
	 		
	 		pos++;
	 		
		 }while(c<n);
		 
		 
		 if(c==n){
		 	printf("%d Está na sequencia de fibonacci e sua posição na ordem é: %d°",n, pos);
		 }
		 else{
		 	printf(" %d Não está na sequência de fibonacci",n);
		 }
		 
}
