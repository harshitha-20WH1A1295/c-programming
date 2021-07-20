#include<stdio.h>
int main()
{
	float cm,meter,km;
	printf("\n enter the length in cm:");
	scanf("%f",&cm);
	meter = cm/100.0;
	km = cm/100000.0;
	printf("\n length in meter = %f,\n length in km = %f",meter,km);
	return 0;
}
