#include<stdio.h>
#include<math.h>
int main()
{
   int x,n,sum,i=1;
  	sum=1;	
    printf("enter the x value= ");	
	scanf("%d",&x);	
	printf("enter the n value= ");	
	scanf("%d",&n);	
	for(i=1;i<=n;i++)	
	{	
		sum+=pow(x,i);
	 } 
	 printf("sum=%d",sum);	
}
 
