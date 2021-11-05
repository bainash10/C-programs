#include<stdio.h>
 #include<conio.h>
void main()
{
float avg,sum;
 int i,n,a=1;
  sum=0;n=0;
for (i=1;i<=10;i++)
{ sum=sum+a;
 a=a+2;
  n++;



}
avg=sum/n; 
printf("avg=%f",avg);
 getch();

}
