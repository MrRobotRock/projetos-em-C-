#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	float B, b, h, at;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a base menor:\n ");
	scanf("%f", &b);
	printf("Digite a base maior:\n ");
	scanf("%f", &B);
	printf("Digite a altura (h):\n ");
	scanf("%f", &h);
	
	at = ((B+b)*h)/2;
	  ''
	printf("A área do trapézio é: %.2f \n ", at);
	
	
	
}
