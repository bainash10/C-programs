#include<stdio.h>
 #include<conio.h>

void lr(int *a); /*function prototype */ 
void main()
{ int a[3][3],i,j;
printf("Enter the matrix");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}}
lr(&a[0][0]);

printf(" \n the largest value is  %d",a);
 getch();
}
void lr(int *a)	/* called function */
{ int i,j;
int lg=*a;
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   if(*(*(a+i)+j)>lg)
   {
    lg = *(*(a+i)+j);
   }
  }
 }

}
