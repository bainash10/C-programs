#include<stdio.h> 

#include<conio.h>
int s(int n);	

void main()	
{ int i,n,y;	

printf("enter the number n");		 
scanf("%d",&n);
	
y= s(n);
printf(" the sum is  %d ",y);	
getch();	}


int s(int a)
	{ int i,s=0;
	
	for(i=1;i<=a;i++)
    {s+=i;}
	return(s);	}

