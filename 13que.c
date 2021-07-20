#include<stdio.h>
int main()
{     
    int hr,min,sec,s;
    printf("enter sec:");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec-hr*3600)/60;
    s=(sec-(3600*hr)-(min*60));
    printf("hr = %d,\nmin=%d,\ns=%d",hr,min,s);
}
