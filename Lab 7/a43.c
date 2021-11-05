#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str[100];
    char *pt, *p;
     
    int  i=0,s=0,c=0;

    printf("Enter any string: ");
    gets(str);

    //assign base address of char array to pointer
    pt=str;
    p=str;
   

  

   while(*pt!='\0')
    {
         if(*pt==' ')
         {s++;}
    pt++;
    }
  printf("number of Spaces : %d\n", s);

  while (*p != '\0') {
    if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
      c++;
    i++;
    p++;
  }

printf("Length of String : %d\n", i);
    printf("Number of Vowels in String: %d\n",c);

    
    
}