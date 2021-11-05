#include <stdio.h>
#include<conio.h>
#include<string.h>


void main()
 {
  int i,j,sum=0,m,n;
  char a[10];
  printf("Enter \n"); 
   gets(a);

  
    for (i = 0; a[i]!= '\0'; i++){
     if(a[i]>='a' && a[i]<='z')
     {a[i]=a[i]-32;}
     
      }


      printf("Upper case are");
      puts(a);
      

    
}