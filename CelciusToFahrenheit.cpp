#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	int c, fah;
	setlocale(LC_ALL, "portuguese");
	
	printf("Celcius que quer converter?: \n");
	scanf("%d", &c);
	
	fah = (9*c)/5+32;
	
	printf("%d celcius para fahrenheit é: %d",c,fah);
	
}
