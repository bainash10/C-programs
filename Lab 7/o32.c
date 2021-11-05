#include<stdio.h>
 #include<conio.h>

void swap(int *, int *); /*function prototype */ 
void main()
{ int a=2,b=3;
printf("the value of a and b before swapping %d \t %d\n",a,b);
 swap(&a,&b);	/*calling function */
printf(" the value of a and b after swapping %d\t %d",a,b);
 getch();
}
void swap(int *x, int *y)	/* called function */
{ int t;
t=*x;
 *x=*y;
  *y=t;
}
