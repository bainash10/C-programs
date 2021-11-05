
#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
void main()
{ int *p;
 int n=5,i;
p=(int*)malloc(sizeof(int)*n); 
printf("enter five numbers"); 
for(i=0;i<=4;i++)
{scanf("%d",(p+i)); } 
for(i=0;i<=4;i++) 
printf(" %d\t",*(p+i));
 getch();
}
