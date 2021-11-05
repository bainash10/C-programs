#include <stdio.h>
#include<conio.h>
int main() {
  int i,sum=0;
  int a[7];
  printf("Enter the 7 numbers");
  for (i=0;i<7;i++){

scanf("%d",&a[i]);
  }
  for (i=0;i<7;i++){
  printf("%d\t",a[i]);
  sum+=a[i];
  }
   
    printf("sum is %d\t",sum);
  getch();
}