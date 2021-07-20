#include<stdio.h>
int main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	if(num%3==0)
	printf("number %d is divisible by 3", num);
	if(num%5==0)
	printf("number %d is divisible by 5",num);
	return 0;
}
