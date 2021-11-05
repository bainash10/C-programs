#include<stdio.h> 
#include<math.h>

int main() 
{
int i,n,j,sign=1;
float y,sum=0.0,x,fact=1;
 printf("enter the x"); 
 scanf("%f",&x);
printf("enter the number of trm");
 scanf("%d",&n);
y=3.14/180*x;
 for(i=1;i<=n;i++)
{fact=1; for(j=1;j<=i;j++) 
fact*=j;
 if(i%2!=0)
{
sum=sum+pow(y,i)/fact*sign; 
sign*=-1;

}
}
printf("the sum of the series is %f",sum); 

return 0;
}
