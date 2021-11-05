#include<stdio.h> 
#include<conio.h>
void italy();	/* function prototype */ 
void brazil();
void main()
{ printf("\n I am in the main function\n");
 italy();
printf(" I am finally back in main function\n");
 getch();
}
void italy()
{ printf(" I am in italy function\n"); 
brazil();
}
void brazil()
{ printf(" I am in brazil function\n"); }
