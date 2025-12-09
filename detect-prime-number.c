/*
Write a program that takes a number and then prints ‘Yes’ if it is prime, and ‘No’ if it is not prime.
*/

#include <stdio.h>
#include <math.h>

int detectPrimeNumber(int n)
{
    int i;
    int limit;

    if (n < 2)
    {
        return 0;
    }

    limit = (int)sqrt(n);
    for (i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, isPrime;

    printf("Please enter your number: ");
    scanf("%d", &n);

    isPrime = detectPrimeNumber(n);

    if (isPrime)
    {
        printf("The number %d is a PRIME number\n", n);
    }
    else
    {
        printf("The number %d is NOT a PRIME number\n", n);
    }
    return 0;
}
