#include<stdio.h>
int  main()
{
	int a,b,c,d,e,count,count2;
	scanf("%i%i%i%i%i",&a,&b,&c,&d,&e);
	count=0;
	if (a>0){count+=1;}
	if (b>0){count+=1;}
	if (c>0){count+=1;}
	if (d>0){count+=1;}
	if (e>0){count+=1;}
	printf("number of positive integers is %i",count);
	count2 = 5 - count;
	printf("\n number of negative integers is %i  ",count2);
}
