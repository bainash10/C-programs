#include<stdio.h> 

#include<conio.h>
int fact(int n);	

void main()	
{ int i,n;
double y;	

printf("enter the number n");		 
scanf("%d",&n);
	
y= fact(n);
printf(" the fact is  %lf ",y);	
getch();	}


int fact(int a)
	{ double f=1;
	if(a<=0)

		return(f); 
        	else
	f=a*fact(a-1);
	return(f);	}

