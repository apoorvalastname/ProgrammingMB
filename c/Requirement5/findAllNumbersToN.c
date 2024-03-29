#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//  Prime Number finder - Find all prime numbers before the number n
bool isPrimeNumber (int num)
{
    for (int i=2; i<=num/2; i++) // Loop starting from 2, till the number num/2
    {
        if (num % i == 0)        // if the number num is divisible by i (reminder of the division is 0)
            return false;        // number num is not prime, return false
    }
    return true;
}

void printAllPrimeNumbersTo (int n)
{
    for (int i=2; i<n; i++)        // Loop starting from 2, till the number n
    {
        if (isPrimeNumber(i))      // check if each number in the loop is a prime number
            printf ("%d \n", i);   // if it is a prime number, print it
    }    
}

// Requirement5
// From 0 to n, Print all numbers that are divisible by 3.
/* void printAllNumbersDivisibleBy3 (int n)
   {
        
   }
*/

int main()
{
    int n;
    printf ("Enter the number n to find all prime numbers before that : ");
    scanf ("%d", &n);
    printAllPrimeNumbersTo (n);
    // printAllNumbersDivisibleBy3 (n); // Requirement5
    return 0;
}
