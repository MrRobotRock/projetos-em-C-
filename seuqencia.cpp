//escreva os Ns primeiros termos da série (1,1,1,3,5,9,17)
#include<stdio.h>
int main(){
	
	int n;
	
	printf("Digite o numeros de termos ppara a sequencia: \n");
	scanf("%d", &n);
	
	if(n>=1){
		printf("1");		
	}
		
	if(n>=2){
		printf("1");		
	}
		
	if(n>=3){
		printf("1");		
	}
	
	int a=1,b=1,c=1;
	
	for(int i=4;i<=n;i++){
		int proximo=a+b+c;
		
		printf(",%d", proximo);
		a=b;
		b=c;
		c=proximo;
	}
	printf("\n");
	return 0;
}

	   
	
	
	

