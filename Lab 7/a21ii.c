// pointer variable
#include <stdio.h>
int main() {
    int a[5],*p;
p=a;
    printf("Enter elements: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));
    return 0;
}