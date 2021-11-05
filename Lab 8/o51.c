#include<stdio.h> 
#include<conio.h>
 void main()
{ struct value
{ int x;
 float y;
};
struct value v; 
v.x=10;
 v.y=20.0;
printf("The value of struct member x and y are %d \t %f",v.x,v.y);
 printf("\nThe total memory occupied by the struct is %d",sizeof(v));
  getch();
}
