#include<stdio.h>

int main()
{
    
    int n,i = 3, count, c;

   

   
        printf("\n\nFirst 20 prime numbers are :  ");
        
    

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= 20; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
    
      return 0;
}
