#include<stdio.h> 
#include<conio.h>

void main()
{	char name[5][10];
int j;
printf("Enter names\n");
for(j=0;j<5;j++)
{
scanf("%s",name[j]);
}
printf("\noutput is \n ");
for(j=0;j<5;j++)
{ printf("%s\n",name[j]);
}
getch();
}
