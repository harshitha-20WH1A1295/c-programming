#include<stdio.h>
int main()
{
	int d,w,y;
	printf("\nenter number of days:");
	scanf("%d",&d);
	y = d/365;
	w = d/7;
	printf("number of years = %d,\n number of weeks = %d",y,w);
}

