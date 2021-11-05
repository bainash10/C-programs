#include <stdio.h>
#define MAX 5
 
int main()
{
  for(int i=1; i<=MAX; i++){
      
    //For left Space
    for(int j=1; j<=MAX-i; j++){
      printf(" ");
    }

    //1st middle half
    for(int k=1; k<=i; k++){
      printf("%d",k);
    }

    //2nd middle half
    for(int k=i-1; k>=1; k--){
      printf("%d",k);
    }

    printf("\n");
  }

  return 0;
}