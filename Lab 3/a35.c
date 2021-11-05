#include <stdio.h>
int main() {
  int n, r = 0, re, org;
    printf("Enter an integer: ");
    scanf("%d", &n);
    org = n;

    // r integer is stod in r variable
    while (n != 0) {
        re = n % 10;
        r = r * 10 + re;
        n /= 10;
    }

    // palindrome if orignal and r a equal
    if (org == r)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);

    return 0;
}
