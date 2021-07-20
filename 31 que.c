#include<stdio.h>
#include<math.h>
int main()
{
	int x,c,s,p_4;
	float sr,y,floor_,ceil_;
	printf("enter the number ");
	scanf("%d",&x);
	printf("enter the number ");
	scanf("%f",&y);
	c=pow(x,3);
	s=pow(x,2);
	p_4=pow(x,4);
	sr=sqrt(x);
	floor_=floor(y);
	ceil_=ceil(y);
	
	printf("\n cube=%d square=%d sqrt=%f floor=%f ceil=%f powerfour=%d",c,s,sr,p_4,floor_,ceil_);
	
}
