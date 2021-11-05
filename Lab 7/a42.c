
#include<stdio.h> 

#include<stdlib.h> 

void main()
{ int *p;
 int n,i,sum=0;
 float avg;
 printf("enter  numbers to store in array");
 scanf("%d",&n);
p=(int*)malloc(sizeof(int)*n); 

for(i=0;i<n;i++)
{printf("enter p[%d] numbers\t",i); 
    scanf("%d",p+i); 
} 
for(i=0;i<n;i++)
{
    sum=sum+*(p+i); 
} 
avg=sum/n;

    printf("Sum is %d and Average is %f\n",sum,avg);
    

}
