
#include<stdio.h>
#include<math.h>

/* Function prototype */
int s(int a[100], int n);
int b(int a[100], int n);
int sd(int a[100], int n);

int main()
{
 int a[100], res,c;
 float d;
 int i, n;

 printf("Enter n:\n");
 scanf("%d", &n);
 /* Reading array */
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
 }
 /* Function Call */
 res = s(a,n);
 c= b(a , n);
d= sd( a, n);
 printf("sum = %d", res);
  printf("avg = %d", c);
  printf("sd = %f", d);
 return 0;
}
/* Function definition */
int s(int a[10], int n)
{
 int i,avg;
 float sum=0.0;
 for(i=0;i< n;i++)
 {
  sum = sum + a[i];
 }

 return(sum);
 
}

int b(int a[10], int n)
{
 int i,avg;
 float sum=0.0;
 for(i=0;i< n;i++)
 {
  sum = sum + a[i];
 }
 avg=sum/n;
 return(avg);
}

 int sd(int a[10], int n)
 {
 int i;
 float avg,sum=0.0,SD=0.0,x;
 for(i=0;i< n;i++)
  sum = sum + a[i];
 
 avg=sum/n;
  for (i = 0; i < 10; i++) 
        SD += pow(a[i] - avg, 2);
    

 return sqrt(SD / 10);
 }
 

