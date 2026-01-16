//calcule a ordem de um número perfeito

#include<stdio.h>
#include<locale.h>

//verifica se é perfeito

int perfeitos(int x){
	int d,soma;
	
	soma=0;
	
	for(d=1;d<x;d++){
		
		if(x%d==0){
			soma = soma+d;
		}
	}
	if(soma==x){
		return 1;	
	} 
	else{
		return 0;
	}
		
  }
  
 int ordemPerfeito(int x){
  	int d, cont=0, i=2, soma; 
  	
  	while(i<=x){
  		soma=0;
	
	for(d=1;d<i;d++){
		
		if(i%d==0){
			soma = soma+d;
		}
	}
	if(soma==i){
		cont++;	
		
  } 
  i++;
 } 	
 return cont;
}

main(){
	setlocale(LC_ALL, "portuguese");
	int n,ordem;//Declara uma variável inteira n.
//Ela vai armazenar o número digitado pelo usuário.
//Declara uma variável inteira `ordem`.  
//Ela vai armazenar **a ordem do número perfeito**, caso exista.
	
	printf("Digite um número perfeito: \n");
	scanf("%d", &n);
	
	if(perfeitos(n)==1){//Chamada da função `perfeitos`.

//O que acontece:
//1. O valor de `n` é passado para a função `perfeitos`.
//2. A função executa.
//3. Ela retorna:
//   - `1` ? número é perfeito  
//   - `0` ? número não é perfeito
//4. O `if` testa esse retorno.
		
		
		
		
		
        ordem = ordemPerfeito(n);//Essa linha **só executa se o `if` for verdadeiro**.
//O que acontece:
//1. `n` é passado para `ordemPerfeito`.
//2. A função calcula quantos números perfeitos existem até `n`.
//3. O valor retornado é atribuído à variável `ordem`.
       
        
        
        
        printf("\n%dº\n", ordem);   
    } 
	else {
        printf("Nao é perfeito\n");//Bloco executado **se `perfeitos(n)` retornar 0**  

    }

    return 0;
}
