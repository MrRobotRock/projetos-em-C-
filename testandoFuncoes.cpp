#include<stdio.h>
#include<locale.h>
#include<math.h>

float transformar (float k){
	float f;
	f = (1.8*k) - 459.67;
	
	return f;
}
float volumeEsfera (float r){
	float v;
	v = (4/3)*3.14*pow(r,3);
	
	return v;
}
float areaTrapezio (float B, float b, float h){
	float a;
	a = ((B+b)*h)/2;
	
	return a;
}

int main(){
	setlocale (LC_ALL, "portuguese");
	float k, f;
	printf("Digite o Kelvin: \n ");
	scanf("%f", &k);
	
	f = transformar(k);
	
	printf("%0.f kelvin em fahrenheit equivale a: %.2f \n", k,f);
	
	float r,v;
	printf("Digite o raio: \n ");
	scanf("%f", &r);
	
	v = volumeEsfera(r);
	
	printf("A área do trapézio é: %.2f \n", v);
	
	float B,b,h,a;
	
	printf("Digite a Base maior: \n");
	scanf("%f", &B);
	printf("Digite a Base menor: \n");
	scanf("%f", &b);
	printf("Digite a altura: \n");
	scanf("%f", &h);
	
	a = areaTrapezio(B,b,h);
	
	printf("A área do trapézio é: %.2f \n", a );
	
}
