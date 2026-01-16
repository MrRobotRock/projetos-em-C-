//calcule quantos primos de fibonacci estão entre A E B 
#include<stdio.h>
#include<math.h>
#include<locale.h>
int Fibonacci(int B){
	int a=0,b=1,c=0;	
	while(c<B){
		c=a+b;
		a=b;
		b=c;		
	}
	if(B==c){
		return 1;
	}
	else{
		return 0;
	}	
}
int primos(int B){
	int d,primo;
	primo=0;
	for(d=1;d<=B;d++){
		if(B%d==0){
			primo++;
		}
	}
	if(primo==2){
		return 1;
	}
	else{
		return 0;
	}	
}
int main(){
	setlocale (LC_ALL, "portuguese");
	int a,b,i, cont=0;
	
	printf("Digite o início do intervalo: \n");
	scanf("%d", &a);
	
	printf("Digite o fim do intervalo: \n");
	scanf("%d", &b);
	
	for(i=a;i<=b;i++){
		if(primos(i)&& Fibonacci(i)){
			printf("\n %d \n\n", i);
				cont++;		
		}
	}
		printf("Dentro do intervalo (%d até %d) tem %d primos de fibonacci!",a,b,cont);
	
	printf("\n");
	return 0;	
	
}



