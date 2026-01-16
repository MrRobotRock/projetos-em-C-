#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	 float r, area;
     	setlocale(LC_ALL, "portuguese");
     	
     	 printf("Digite o raio: \n ");
		 scanf("%f", &r);
		 
		 area = 3.14*(r*r);
		 
		 printf("A área do circulo é: %.2f ", area);
	}
