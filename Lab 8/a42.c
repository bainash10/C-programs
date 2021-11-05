#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

void input(struct complex*);
void display(struct complex);
struct complex sum(struct complex, struct complex);
struct complex product(struct complex, struct complex);

int main()
{
    struct complex c1, c2, c3, c4;
    printf("\nEnter Complex Number 1: \n");
    input(&c1);
    printf("\nEnter Complex Number 2: \n");
    input(&c2);
  
    c3 = sum(c1, c2);
    printf("\n\nAddition = ");
    display(c3);
    c4 = product(c1, c2);
    printf("\n\nProduct = ");
    display(c4);
    return 0;
} 

void input(struct complex *t)
{
    printf("\nEnter value in\n");
    printf("real part : ");
    scanf("%f", &t->real);
    printf("imaginary part : ");
    scanf("%f", &t->imag);
} 





struct complex product(struct complex t1, struct complex t2)
{
    struct complex t;
    t.real = t1.real * t2.real - t1.imag * t2.imag;
    t.imag = t1.real * t2.imag + t1.imag * t2.real;
    return t;
}