#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
   if(a>=b && a>=c)
      printf("max is A %d",a);
   else 
   if (b>=a && b>=c)
      printf("max is B %d",b);
   else
      printf("max is C %d",c);
       
      return 0;
   
}