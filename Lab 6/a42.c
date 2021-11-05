#include<stdio.h>
void sm(int n, int a[]);
void main()
{
int a[50],n,i;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nInput the array elements : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

sm( n, a);
}
void sm(int n, int a[])
{
int small,i;
small=a[0];

for(i=1;i<n;i++)
{


if(a[i]<small)
small=a[i];
}

printf("\nThe smallest element is %d\n",small);


}