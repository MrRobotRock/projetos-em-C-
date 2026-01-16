#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n,i,primo;
	
	printf("DIGITE UM NÚMERO PRA SABER SE É PRIMO OU NÃO: ");
	scanf("%d", &n);
	
	if(n<0){
		printf("Digite um número válido >0");
		
		return 0;
	}
	
	for(i=1;i<n;i++){
		if(n%i==0){
			primo = primo+1;
		}
	}
	if(primo == 2){
		printf("É primo!");
		
	}
	else{
		printf("Não é primo!");
	}
}
