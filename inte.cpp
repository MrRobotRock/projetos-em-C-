#include<stdio.h>

int seriar(int n) //série recursiva
{   if(n==1)  //primeiro caso
     return 2;
     else
      return (seriar(n-1)*seriar(n-1))+1;
 }
main()
{  int n;
   for(n=1;n<9;n++){
   
     printf("%d ",seriar(n));
}
}

