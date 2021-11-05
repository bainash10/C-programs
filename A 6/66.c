#include <stdio.h>
#include<conio.h>


void main()
 {
  int i,j;
  int a[3][3],c[3][3];
  printf("Enter the matrix\n");
  for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
         scanf("%d", &a[i][j]);}}

for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        c[i][j]=a[j][i];
      }}

         printf("the transpose is /n");
  for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
  }
  printf("\n");
  }
   
    
  getch();
}