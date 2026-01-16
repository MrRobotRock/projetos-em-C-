#include<stdio.h>
#include<locale.h>
main(){

  float nota1, nota2 , notas;
  
  printf("Digite sua primeira nota \n");
  scanf("%f", &nota1);
  printf("Digite sua segunda nota \n");
  scanf("%f", &nota2);
  
  notas = nota1 + nota2;
  
  printf("A sua nota final foi: %.2f \n", notas);
  
   if(notas<60){
   	printf("REPROVADO!\n");
   }
   else{
   	printf("APROVADO!");
   }
	
}
