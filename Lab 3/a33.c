#include<stdio.h>
 #include<conio.h>
void main()
{
float avg,sum;
 int i=1,n,a=1;
  sum=0;n=0;
while(i<=10)
{ sum=sum+a;
 a=a+2;
  n++;
  i++;

}
avg=sum/n; 
printf("avg=%f",avg);
 getch();

}
