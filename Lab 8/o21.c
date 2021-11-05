#include<stdio.h>
#include<conio.h>
 struct date
{int day; 
int month; 
int year;
};
void main()
{
struct student
{ char name[20]; 
int rollno;
float mark;
 struct date dob;
};
struct student std={"Kumar",101, 80,{23,11,1980}};	
printf("Name = %s \t rollno=%d\t and mark=%f",std.name,std.rollno,std.mark); 
printf("\n Date of birth is %d /%d/%d", std.dob.day,std.dob.month,std.dob.year); 
getch();
}
