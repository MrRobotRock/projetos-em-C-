//calcule o menor primo maior que o enésimo abundante 


//função que CALCULA O ENESIMO ABUNDANTE
#include<stdio.h>
#include<locale.h>

int abundante(int x){
	int d,soma,i=2,cont=0, abun=0;
	
	while(cont<x){
	
	soma=0;
	
	
	for(d=1;d<i;d++){
		if(i%d==0){
			soma = soma + d;
		}
	}
	
	if(soma>i){
		cont++;
		abun = i;
		i++;
	}
	else{
		i++;
	}		
 }
 return abun;
}

// função que gera primos ate ser maior que o enesimo abundante

int primos(int abun){
	int i=abun+1,d, primo;
	
	
	while(1){
		
	primo=0;
	
	for(d=1;d<=i;d++) 
	{
		if(i%d==0){
			primo=primo+1;
		}
	 }
	 if(primo==2) {
	 	return i;
	 } 
	 else{
	 	i++;
	 }	
   }
 }

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int a, abun, resultado;
	
	printf("Digite a ordem do abundante:\n");
	scanf("%d", &a);
	
	
    abun = abundante(a);
    
    resultado = primos(abun);    

    printf("\n O maior número primo MAIOR que o enésimo abundante digitado é: %d\n", resultado);

    return 0;	
}
