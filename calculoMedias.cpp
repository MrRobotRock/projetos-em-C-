#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	float p1,p2,p3,p4, m,af, afinal, n1, n2, mf;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite suas notas p1, p2, p3 e p4 \n");
	scanf("%f %f %f %f", &p1, &p2, &p3, &p4);
	
	n1 = (p1+p2)/2;
	n2 = (p3+p4)/2;
	
	m = ((2*n1) + (3*n2))/5;
	
	printf("Sua média parcial é: %.2f\n", m); 
	
	if(m >= 7.0){
		printf("Você passou direto!");
		
	} else if(m >= 3.0) { 
		
		printf("Você está de AF.\n");
		af = 10.0 - m; 
		printf("A sua nota mínima na AF deve ser: %.2f\n", af);
		
		printf("Digite a sua nota da AF: ");
		scanf("%f",&afinal);
		
		mf = (afinal + m) / 2.0;	
		
		printf("Sua média final é: %.2f\n", mf);
		
		
		if(mf >= 5.0){ 
			printf("Você passou (via AF)!");
		}else{
			printf("Você reprovou (após AF)!");
		}
		
	} else { 
		printf("Você reprovou direto!");
		
	}
	
	printf("\n"); 
}
