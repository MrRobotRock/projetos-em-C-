#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	int  n,i=1, fat;
	
	printf("DIGITE UM NÚMERO PARA CALCULAR O FATORIAL: \n");
	scanf("%d", &n);
	if(n<0){
	 	printf("Digite um número válido");
	 	
	 	return 0;
	 	
	 }
	 printf(" %d Fatorial = ", n);
	
	for(i=1;i<=n;i++){
		
		fat =  fat * i ;
		
		printf("%d", i);
	    if (i < n) { 
            printf(" * ");
        }
		
	}
	printf(" = %d\n",fat);
	return 0;
}
	

