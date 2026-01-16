//FUNÇÃO RECURSIVA PARA  (2,5,26,677)

//2, 5, 26, 677...
#include<stdio.h>
int seria(int n) //série iterativa
{  int x=2,cont=1;
   if(n==1)  //primeiro caso
     return 2;
     else
     {  do
       {  x=(x*x)+1;
          cont++;
	   }while(cont<n);
	   return x;
	 }
}
int seriar(int n) //série recursiva
{   if(n==1)  //primeiro caso
     return 2;
     else
      return (seriar(n-1)*seriar(n-1))+1;
 }
main()
{  int n;
   for(n=1;n<9;n++)
     printf("%d ",seriar(n));
}


letra b

#include<stdio.h>
int fibonacci(int n)
{
	if(n==1 || n==2)
	return 0;
	else
	return fibonacci(n-1)+fibonacci(n-2)+1;
}
int fibo(int n)
{	int a=0,b=0,c,cont=2;
	if(n==1 || n==2)
	return 0;
	else
	do
	{
		c=a+b+1;
		a=b;
		b=c;
		cont++;
	}while(cont<n);
	return(c);
}
int main()
{
	int x;
	printf("digite:\n");
	scanf("%d", &x);
	printf("%d, %d", fibonacci(x), fibo(x));
}

letra c

#include<stdio.h>
int recursiva(int n)
{
	if(n==1)
	return 1;
	else
	{
		if((n-1)%2==0)
			return (recursiva(n-1)*2)-1;
		else
			return recursiva(n-1)*2;
	}
}
int ite(int n)
{	int x=1,cont;
	if(n==1)
	return 1;
	else
	{
	for(int i = 1;i<n;i++)
	if(x%2==0)
		x = (x*2)-1;
	else
		x = x*2;
	}
		return x;
}
int main()
{	int N,i,cont;
	printf("digite n\n");
	scanf("%d",&N);
	printf("%d,%d",recursiva(N),ite(N));
}

letra d

#include<stdio.h>
int rec(int n)
{	if(n == 1 || n == 2)
	return 0;
	
	else
	{	int i=1;
		return rec(n-1)+(n-2);
	}	
}
int ite(int n)
{	int x, i=0;
	if(n == 1 || n == 2)
	return 0;
	else
	{	for(int cont=2; cont<n; cont++)
		i = i + (cont-1);
	}	
	return i;
	
}
int main()
{
	int x;
	printf("digite:\n");
	scanf("%d", &x);
	printf("%d, %d", rec(x),ite(x));
}
