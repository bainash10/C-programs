#include<stdio.h>
 #include<conio.h>
void main()
{
float avg,sum;
 int i=1,n,a=1;
  sum=0;n=0;
do
{ sum=sum+a;
 a=a+2;
  n++;
  i++;

}
while(i<=10);
avg=sum/n; 
printf("avg=%f",avg);
 getch();

}
