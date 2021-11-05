#include<stdio.h> 
#include<conio.h>
void modify(int a[]); /*function prototype */
void main()
{ int count, a[3];
printf("\n From main, before calling the function the \n");
 for(count=0; count<=2;count++)
{ a[count]=count+1;
printf(" a[%d]=%d\n",count,a[count]);
}
modify(a);
printf("\n From main, after calling the function \n"); 
for(count=0; count<=2;count++)
{ printf(" a[%d]=%d\n",count,a[count]);
}
getch();
}
void modify(int a[])
{int count;
printf("\nFrom main, after modifying the values \n");
 for(count=0; count<=2;count++)
{ a[count]=-5;
printf(" a[%d]=%d\n",count,a[count]);
}
}
