//Exibe quantos núemros tem entre A e B

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int a, b, i;
	
	printf("DIGITE O INICIO: \n");
	scanf("%d", &a);
	
	printf("DIGITE O FIM: \n");
	scanf("%d", &b);
	
	for(i=a+1;i<b;i++){
		printf("%d ", i);
	}
}
	
	
	

  
