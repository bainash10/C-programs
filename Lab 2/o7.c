#include<stdio.h> 
#include<conio.h>
void main()
{	int choice,quantity,tcost; 
printf("Here is the menu\n");
printf("1-- Momo\n2---Chopsy\n3—chowmin\nenter choice no"); 
scanf("%d",&choice);
switch(choice)
{	
    
  
    case 1:

 
printf("enter the quantity");
 scanf("%d",&quantity); 
 tcost=25*quantity;
printf("item \t unitcost \t quantity \t total cost \n"); 
printf("momo\t\t25\t\t%d\t\t%d\n",quantity,tcost); 
break;



case 2:
 


printf("enter the quantity"); 
scanf("%d",&quantity);
 tcost=30*quantity;
printf("item \t unitcost \t quantity \t total cost \n"); 
printf("Chopsy\t\t35\t\t%d\t\t%d\n",quantity,tcost); break;
 case 3: 
printf("enter the quantity"); 
scanf("%d",&quantity); 
tcost=30*quantity;
printf("item \t unitcost \t quantity \t total cost \n"); 
printf("chowmin,\t30\t\t%d\t\t%d",quantity,tcost); 
break;
default:
printf("\n incorrect choice");
}
getch();
}
