////escreva os Ns primeiros termos da série (1,1,3,5,11,21,43)
 #include<stdio.h>
int main(){
	
	int n;
	
	printf("Digite quantos termos vc quer dessa sequencia: \n");
	scanf("%d", &n);
	
	if(n>=1){
		printf("1,");
	}
	if(n>=2){
		printf("1");
	}
	
	int atual = 1, anterior = 1, proximo,i;
	
	for(i=2;i<n;i++){
		
	proximo = atual + (2* anterior);
	printf(",%d", proximo);
	
	anterior=atual;
	atual=proximo;

	}
}
