#include<stdio.h>
#include<conio.h> 
void function();
int a,b=10;	/*global variable */	
 void main()
 {

  int a=20; 
printf("%d\n",a); 	
function();	
getch();
}
void function()
			{ int c;
           

            c=a+b; 	
            printf("%d",c);
            }
