#include<stdio.h>
int main()
{
	int w,c,n,totalweight,totalcost;
	printf("enter item's weigh:");
	scanf("%d",&w);
	printf("\n enter the cost:");
	scanf("%d",&c);
	printf("\n enter no. of units purchased:");
	scanf("%d",&n);
	totalweight = n*w;
	totalcost = n*c;
	printf("totalweight = %d, totalcost = %d",totalweight,totalcost);
	return 0;
	
}
