#include<stdio.h>
int main()
{
	int num,i,f;	
	i=1;	
	f=0;	
	printf("enter the number ");	
	scanf("%d",&num);	
	for(i=1;i<=num;i++)	
	{	
		if(num%i==0)		
		f++; 
		} 	
		 if(f==2) 
		 printf("it is a prime number "); 
		 else
		  printf("it is not a prime number");
}
