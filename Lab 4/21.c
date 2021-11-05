#include<stdio.h> 
#include<conio.h>
void sum(void);
int su();
int s(int , int);
 
void main()
{ int a , b,u,t;
sum();	
u=su();
printf("sum with return type and no arg %d",u);

printf("\nenter the number a,b for return type and arguments\n");	
scanf("%d%d",&a,&b);
t=s(a,b);
printf("sum with return type and with arg %d",t);

getch();	}

void sum(void)
{ int a1,b1,e; 
	printf("enter the number a1,b1\n");	
scanf("%d%d",&a1,&b1);
    e=a1+b1;

printf("sum is with no arg and no return type is%d",e);
}

int su()
{
   int a2,b2,o; 
	printf("\nenter the number a2,b2\n");	
scanf("%d%d",&a2,&b2);
    o=a2+b2;

return o;
} 

int s(int a, int b)
{
   int d;
    d=a+b;

return d;
} 

