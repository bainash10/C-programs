#include<stdio.h>
void main()
{
int a1,a2,r1, *p1, *p2;
printf("enter two numbers");
scanf("%d %d",&a1,&a2);
p1=&a1;
p2=&a2;
r1=*p1+*p2;
printf("addition is %d",r1);
r1=(*p1)*(*p2);
printf("\nmultiplication is is %d",r1);
r1=*p1-*p2;
printf("\nsubtraction is %d",r1);
}