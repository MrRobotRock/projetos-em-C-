#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int n;
	
	printf("DIGITE UM NÚMERO PARA SABER SE É PAR OU NÃO: \n ");
	scanf("%d", &n);
	 if(n<0){
	 	printf("Digite um número válido");
	 	
	 	return 0;
	 	
	 }
	 if(n%2==0){
	 	printf("%d --> é par!",n);
	 }
	 else{
	 		printf("%d --> é ímpar!",n);
	 }
}
	 
	
