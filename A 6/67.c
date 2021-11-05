#include <stdio.h>
#include<conio.h>


void main()
 {
  int i,j,sum=0,m,n;
  int a[10][10];
  printf("Enter the num of rows\n"); 
   scanf("%d", &m);
    printf("Enter the num of columns\n"); 
   scanf("%d", &n);
   printf("Enter the number");
    for (j = 0; j < m; j++){
      for (i = 0; i < n; i++){
     scanf("%d", &a[i][j]);
      }}

  for (j = 0; j < m; j++){
      for (i = 0; i < n; i++){
       sum=sum+a[i][j];
      }}
      printf("sum is %d",sum);

      


   
    
  getch();
}