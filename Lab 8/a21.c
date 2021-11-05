#include<stdio.h>
#include<conio.h>
 struct date
{int day; 
int month; 
int year;
};
void main()
{int i;
struct student
{ char name[20]; 
int rollno;
float mark;
 struct date dob;
};
struct student s[3];	
printf("Enter information of students");
 for (i = 0; i < 3; i++) {
   
         printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("\n roll number,\n");
           scanf("%d", &s[i].rollno);
        printf("Enter marks: ");
        scanf("%f", &s[i].mark);
        printf("\n Date of birth is "); 
         scanf("%f %f %f", &s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
    } 

 printf("\n\n\t\t Names are: ");
  for (i = 0; i < 3; i++) {
        if(s[i].mark>30)
       {
        puts(s[i].name);
       }
    }
getch();
}
