#include<stdio.h>
int main()
{
     int A[10],count,i;	
	 printf("enter the numbers ");	
	 count=0;	
	 for (i=0;i<10;i++)
	{		
	scanf("%d",&A[i]);		
	count =count+A[i];		
	}
		printf("the sum =%d",count);
}
