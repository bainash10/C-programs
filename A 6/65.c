#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n=0,e=0,o=0;
    int a[5];
    for(i=0;i<5;i++){
printf("enter the numbers to store in array");
scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
    if(a[i]<0)
    {
        n++;
    }
    }
    for(i=0;i<5;i++){
       if(a[i]%2==0)
    {
        
        e++;
    }
   
      else
    {
        o++;
    }
    }
   
    
     printf("negative numbers are %d",n);
     printf("odd numbers are %d",o);
     printf("even numbers are %d",e);
    getch(); 
}
