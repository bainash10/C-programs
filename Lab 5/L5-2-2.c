#include <stdio.h>
 
int main()
{
   int  i,j, first[10][10], second[10][10], sum[10][10];
   
 
   
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the elements of second matrix\n");
 
     for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
         scanf("%d", &second[i][j]);
   
   printf("Sum of entered matrices:-\n");
   
      for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++) {
         sum[i][j] = first[i][j] + second[i][j];
         
      }
  
   }
   
      for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++) {
         
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}