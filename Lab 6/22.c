#include<stdio.h>
 #include<conio.h>
  #include<string.h> 
  int fun(char a[30]); 
  void main()
{ int x; char a[30]; 
gets(a);
x=fun(a);
 printf("%d",x); getch();
}
int fun(char a[30])
{
int i,c=0; int l; l=strlen(a);
for(i=0;i<l;i++)
 
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') 
c++;
}
return(c);
}
