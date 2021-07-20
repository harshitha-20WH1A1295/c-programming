#include<stdio.h>
int main()
{
	int integer;
	char character;
	float inputfloat;
	printf("enter a integer value:");
	scanf("%d",&integer);
	printf("enter a character:");
	scanf("%c",&character);
	printf("\n enter a float value:");
	scanf("%f",&inputfloat);
	printf("the integer value entered is : %d",integer);
	printf("the character entered is : %c",character);

	printf("\n the float value entered is : %f",inputfloat);
	return 0;
}
