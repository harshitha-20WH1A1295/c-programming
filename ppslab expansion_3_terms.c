#include<stdio.h>
#include<math.h>
int main()
{
    double x,i,sum,sign,m,n,d;	
	printf("enter the x value= ");	
	scanf("%lf",&x);	
	sum=1;	
	for(i=1;i<=3;i++) 	
	{	
		sign=pow(-1,i);		
		m=pow(x,i);		
		sum=sum+((sign*m)/(2*i));
	} 
		 printf("sum=%lf",sum);return 0;
    
}
 
