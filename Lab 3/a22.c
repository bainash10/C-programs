#include<stdio.h>
 #include<conio.h>
void main()
{
float avg,sum;
 int i,n;  
sum=0;n=0;
for (i=1;i<=10;i++)
{ sum=sum+i;

  n++;



}
avg=sum/n; 
printf("avg=%f",avg);
 getch();

}
