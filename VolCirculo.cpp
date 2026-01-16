#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	float r, e;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o raio da esfera \n");
	scanf("%f", &r);
	
	e = (4 * 3.14 * pow(r,3))/3;
	
	printf("O volume da esfera é aproximadamente: %.2f ", e);
	
}
