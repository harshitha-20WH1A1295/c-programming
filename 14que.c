#include<stdio.h>
int main()
{
	int days,months,years;
	printf("enter days :");
	scanf("%d",&days);
	years=days/365;
	months=days/30;
	printf("the number of years = %d,\n number of months = %d",years,months);
	return 0;
}
