#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	int a,b,c;
	float delta, x, r1, r2;
    setlocale(LC_ALL, "portuguese");
     
    printf("digite o a,b e c \n");
    scanf("%d %d %d", &a, &b, &c);
     
	if(a==0){
		x = -c/b;
		printf("A equação do 1 grau é:%f", x);
	}
	else{
		delta = (b*b) - (4*a*c);
	
	if(delta < 0){
		printf("Não existe raizes reais");
	}
	else if(delta == 0){
		x = -b/(2*a);
		printf("O delta ==0 resulta em raizes reais sendo eles igual a: %f", x);
	}
	else if (delta > 0){
		r1 = (-b + sqrt(delta))/(2*a);
		r2 = (-b - sqrt(delta))/(2*a);
		printf("As raizes são %.2f e %.2f", r1, r2);
      }
	}
}
