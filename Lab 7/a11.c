#include<stdio.h>
#include<conio.h> 
void main()
{ int a, *pa; 

printf("\n The address of a=%u", &a); 
printf("\n The address of pa=%u", &pa);
 pa=&a;
printf("\n The address of a using pointer variable is %u", pa); 
pa++;
printf("\n The address of a after increment of pointer=%u", pa);
 printf("\n enter the number to be store in variable a"); 
 scanf("%d", &a);
printf("\n The value of a=%d", a);
printf("\n The value of a using & operator is =%d", *(&a)); 
printf("\n The value of a using pointer variable =%d", *pa); 
getch();
}
