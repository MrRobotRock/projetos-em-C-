#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
     int n, num, i=0, soma=0, pares=0, media, porcentagem;
     	setlocale(LC_ALL, "portuguese");
	 
	 printf("Quantos números?\n");
	 scanf("%d", &n);
	 
	 for(i=0;i<n;i++){
	 	printf("Digite um número:\n ");
	 	scanf("%d", &num);
	 	soma = soma+num;
	 
	 if(num%2 ==0){
	 	pares =pares+1;
	 }
}
 media = soma / n;
 porcentagem = (pares /n)*100;
  
     printf("SOMA: %d \n", soma);
	 printf("MEDIA: %d \n", media);
	 printf("PORCENTAGEM: %d \n", porcentagem);
	 }
