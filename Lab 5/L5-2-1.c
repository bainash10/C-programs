#include <stdio.h>
#include<conio.h>


void main()
 {
  int i,j;
  int a[4][4];
  printf("Enter the matrix\n");
  for (i = 0; i < 4; i++){
      for (j = 0; j < 4; j++){
         scanf("%d", &a[i][j]);}}

         printf("Contents of array are \n");
  for (i=0;i<4;i++)
{
for (j=0;j<4;j++)
{
printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
   
    
  getch();
}