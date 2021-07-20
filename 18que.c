#include<stdio.h>
int main()
{
	int d,hours,min,sec;
	printf("enter input :");
	scanf("%d",&d);
	hours = d/3600;
	min = (d-(3600*hours))/60;
	sec  = (d-(3600*hours)-(min*60));
	printf("%d:%d:%d\n",hours,min,sec);
	return 0;
	
}
