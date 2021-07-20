#include<stdio.h>
int main()
{  
     int a,b,c,sum,avg,product;
     printf("enter the three integers:");
     scanf("%d%d%d",&a,&b,&c);
     sum = a+b+c;
     avg = a+b+c/2;
     product = a*b*c;
     printf("sum = %d ,\n avg = %d, \n product = %d", sum ,avg , product);
}
