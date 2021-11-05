
#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
void sats(int*p,int n);
void main()
{ int *p;
 int n,i;
 printf("enter  numbers to store in array");
 scanf("%d",&n);
p=(int*)malloc(sizeof(int)*n); 
printf("enter n numbers"); 
for(i=0;i<n;i++)
{
    scanf("%d",p+i); 
} 
sats(p,n);
printf("in ascending\n");
for(int i=0;i<n;i++){
    printf("%d\t",*(p+i));
    
}

}
void sats(int *p,int n)
{int b,i,j;
for(i=0;i<n;i++)
{for(j=0;j<n;j++){ 
if(*(p+i)<*(p+j))
{
    b=*(p+i);
*(p+i)=*(p+j);
*(p+j)=b;
}

}}

}
