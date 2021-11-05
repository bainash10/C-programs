#include<stdio.h>
#include<conio.h> 
void main()
{ struct book
{ char name[20]; 
float price;
 int pages;
};
struct book b1,b2;
printf("enter");
scanf("%s %f %d",b1.name,&b1.price, &b1.pages);
b2=b1;
printf("\n %s\t %f\t%d",b2.name,b2.price,b2.pages);
getch();
}
