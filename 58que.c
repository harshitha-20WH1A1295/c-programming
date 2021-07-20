#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a=%d is maximum",a);
	if(b>a&&b>c)
	printf("b=%d is maximum",b);
	else
	printf("c=%d is maximum",c);
	return 0;
	
	
}
