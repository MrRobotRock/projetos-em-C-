#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL, "portuguese");
	
	int x,y,z;
	printf("Digite 3 números para comparar \n");
	scanf("%d %d %d", &x, &y, &z);
	  
	  if(x>y && x>z){
	  	if(y>z){
	  		printf(" A ordem é: %d-%d-%d \n",x,y,z);
		  }
		  else{
		  	printf(" A ordem é: %d-%d-%d \n",x,z,y);
		  }
	  }
	  else if(y>x && y>z){
	  	if(x>z){
	  		printf(" A ordem é: %d-%d-%d \n",y,x,z);	
		  }
		  else{
		  		printf(" A ordem é: %d-%d-%d \n",y,z,x);
		  }
	  }
	  else if(z>x && z>y){
	  	if(x>y){
	  			printf(" A ordem é: %d-%d-%d \n",z,x,y);
		  }
		  else{
		  		printf(" A ordem é: %d-%d-%d \n",z,y,x);
		  }
	  	
	  }
	  else{
	  		printf(" mesmo numero ;-;");
	  }
}
