#include<stdio.h>

void main()
{
    int i,sum=0,avg,c,l=0,s=0;
    int a[10];
    
printf("enter the numbers to store in array");
    for(i=0;i<5;i++){

scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
    

        sum=sum+a[i];

    c++;
    
   
    }
    avg=sum/c;
    printf("avg is %d\n",avg);
   for(i=0;i<5;i++){
       if(a[i]<avg)
       {
            s++;
       }
       else
            l++;
            }
     
        printf("small is %d",s);
           printf("large is %d",l);

}
