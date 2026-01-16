#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	
	setlocale(LC_ALL, "portuguese");
	float x1,x2, a,b,c,d;
	
	printf("Digite o 'a': \n");
	scanf("%f", &a);
	printf("Digite o 'b': \n");
	scanf("%f", &b);
	printf("Digite o 'c': \n");
	scanf("%f", &c);
	
 d = pow(b,2) - (4*a*c);
 x1 = (-b + sqrt(d))/(2*a);
 x2 = (-b - sqrt(d))/(2*a);
  
  if(d>0){
  	printf("As raizes são x1 %.4f e x2 %.4f \n",x1,x2);
  }
  else if(d==0){
  	printf("Raizes iguais a:%.4f",x1);
  }
  else{
  	printf("não existe raizes reais!");
  }
}
