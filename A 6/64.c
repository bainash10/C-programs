#include<stdio.h>
#include<conio.h>
void main()
{
    int i,max1,max2;
    int a[10];
    for(i=0;i<10;i++){
printf("enter the numbers to store in array");
scanf("%d",&a[i]);
    }
    max1=max2=a[0];
    for(i=0;i<10;i++)
    {
    if(max1<a[i])
    {
        max2=max1;
        max1=a[i];
    }
    elseif(max2<a[i] && a[i]!=max1)
    {
    max2=a[i];
    }
    }

     printf("second largest number is %d",max2);
    getch(); 
}
