#include<stdio.h>  
 int main()    
{    
int n, re=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     re=re*10+rem;    
     n/=10;    
  }    
  printf("reverse Number: %d",re);    
return 0;  
}   