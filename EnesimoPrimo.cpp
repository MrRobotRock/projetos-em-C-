// escreva o enésimo primo

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");

int i, n, cont=1, primo,d;

printf("Digite a quantos primos que vc quer: \n");
scanf("%d", &n);

while (cont<n){

primo = 0;
for(i=1;i<=n;i++){
	for(d=1;d<=i;d++){
		if(i%d==0)
		primo++;
	}
	if(primo == 2){
		printf("%d", i);
	}
	cont++;
	
}
}
}


