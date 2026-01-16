#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int glicose;
	
	printf("Digite a medida de glicose(mg/dl)) \n");
	scanf("%d", &glicose);
	
	if(glicose<=100){
		printf("%d mg/dl : Normal.", glicose);
	}
	else if(glicose>100 && glicose<=140){
		printf("%d mg/dl : Elevada!", glicose);
	}
	else{
		printf("%d mg/dl : DIABETES!!", glicose);
	}
}
