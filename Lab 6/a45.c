#include <stdio.h>
#include <string.h>
void pa(char a[]);
void main()
{
  char a[100];

  printf("Enter a string to check if it's a palindrome\n");
  gets(a);
pa(a);
}

void pa(char a[])
{ char b[100];
  strcpy(b, a);  // Copying input string
  strrev(b);  // Reversing the string

  if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");

  
}