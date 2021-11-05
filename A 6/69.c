#include<stdio.h>
#include<math.h>


void main()
{
    int i,sum=0,avg,n;
    int a[10];
    float SD=0.0;
    printf("enter the length of array");
scanf("%d",&n);
printf("enter the numbers to store in array");
    for(i=0;i<n;i++){

scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    
        sum=sum+a[i];

    }
    
   avg=sum/n;

     
  for (i = 0; i < 10; i++) 
        SD += pow(a[i] - avg, 2);
    

 printf("SD is %f",sqrt(SD / 10));

    }
    
