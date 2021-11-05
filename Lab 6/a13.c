#include<stdio.h> 
#include<conio.h>
#include<string.h>


void main()
{	char name[10][20],temp[20];
int i,n,j;
printf("Enter number of names\n");
scanf("%d",&n);

printf("Names\n");
for(i=0;i<n;i++)
{
gets(name[i]);
}

for (i = 0; i < n ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
printf("\n in alphabetical  \n ");
for(j=0;j<n;j++)
{ puts(name[j]);
}
getch();
}