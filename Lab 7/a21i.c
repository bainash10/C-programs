//array name itself as a pointer
//array name itself as a pointer
#include <stdio.h>
int main() {
    int a[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", a + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(a + i));
    return 0;
}