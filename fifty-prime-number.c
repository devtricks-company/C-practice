#include <stdio.h>
#include <math.h>

int IsPrimeNumber(int a)
{
    int isPrime = 1, i = 2;

    for (i; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

int main()
{
    int i = 2, count = 0;
    while (1)
    {
        if (count == 50)
            break;
        if (IsPrimeNumber(i))
        {
            count++;
        }
        i++;
    }

    printf("the 50th Prime number is: %d", i - 1);
}