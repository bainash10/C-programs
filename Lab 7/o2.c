#include<stdio.h>
#include<conio.h>
void main()
{ int a[5]={2,4,7,3,6};
printf("\n Elements no	value	Address of elements");
 for(int i=0;i<=4;i++)
{ printf("\n a[%d]=\t %8d%9u",i,*(a+i),a+i);
}
 getch();
}
