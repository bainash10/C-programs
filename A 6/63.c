#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0;
    int a[10];
    for(i=0;i<10;i++){
printf("enter the numbers to store in array");
scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
    if(i%2==0)
    {
        sum=sum+a[i];
    }
   
    }
     printf("sum is %d",sum);
    getch(); 
}
