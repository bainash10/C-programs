#include<stdio.h>
 
int findf(int);
int main(){
  int i,f,n;
 
  printf("Enter a num: ");
  scanf("%d",&n);
 
  f = findf(n);
  printf("fact of %d is: %d",n,f);
 
  return 0;
}
 
int findf(int n){
    int i,f=1;
 
    for(i=1;i<=n;i++)
      f=f*i;
 
     return f;
}