//verifica se um núemro é fibonacci (com função)


#include<stdio.h>
#include<math.h>
#include<locale.h>

int fibonacci (int n){
	setlocale (LC_ALL, "portuguese");
	int a=0, b=1,c;
	
	if(n==0||n==1){
		return 1;
	}
	
	while(b<n){
		
		c=a+b;
		a=b;
		b=c;
	}
	
	if(c==n){
		return 1;
	}
	else{
		return 0;
	}
}
	
	int main(){
		int numero;
		
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		if(fibonacci(numero)){
			printf("%d é fibonacci \n", numero);
		}
		else{
			printf("%d não é fibonacci \n", numero);
			return 0;
		}
		
	}

