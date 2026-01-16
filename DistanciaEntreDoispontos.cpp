#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	int x1,x2, y1, y2;
	float d;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o x1, x2 \n");
	scanf("%d %d", &x1, &x2);
	
	printf("Digite o y1 e y2 \n");
	scanf("%d %d", &y1, &y2);
	
	d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	
	printf("A distãncia entre dois pontos é: %.2f \n", d);
}
