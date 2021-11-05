#include<stdio.h>
#include<conio.h>
void display(char name[],char author[],int pages); 
struct book
{ char name[30]; 
char author[20];
 int pages;
};
void main()
{ struct book b; 
printf("Enter name author and pages");
scanf("\n%s %s %d",b.name,b.author,b.pages);
display(b.name,b.author,b.pages);
getch();
}
void display(char name[],char author[],int pages)
{printf("\n%s %s %d",name,author,pages);
}
