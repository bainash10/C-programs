#include<stdio.h>
int pal (char s[]);
void main()
{
    int i,y;
    char s[100];
    
printf("enter the name to store in array");
gets(s);
    
    /*for(i=0;a[i]!='\0';i++){
    l++;
    }*/
y=pal (s);

       
            printf("No. of  vowels are %d",y);
}


int pal (char s[])
{int i,c=0,count = 0;
  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }
return (count);
       
            }
   
       
      


