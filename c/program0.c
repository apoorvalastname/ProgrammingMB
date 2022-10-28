#include <stdio.h>

/* 
 * Read 2 numbers
 * Read the largest possible sum (S)
 * Add the 2 numbers
 * If the sum of the 2 numbers is greater than S, just return S. 
 * Otherwise return the sum of the 2 numbers
 */ 

int sumNotGreater (int a, int b, int c)
{
    int sum = a+b;
    if (sum > c)
        sum = c;
    return sum;
}

int main()
{
    int a, b, c;
    printf ("Enter first number : ");
    scanf("%d", &a);
    printf ("Enter second number : ");
    scanf("%d",&b);

    printf ("Enter largest possible sum : ");
    scanf("%d",&c);
    int s = sumNotGreater (a, b, c);
    printf ("The sum of the numbers %d, %d : %d\n", a, b, s); 
}
