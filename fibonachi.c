#include <stdio.h>

long long calculateNFibonachi(int n)
{
    long long a = 0;
    long long b = 1;
    long long temp;
    int count = 0;

    do
    {
        temp = b;
        b = a + b;
        a = temp;
        count++;

    } while (count < n);

    return a;
}

int main()
{
    int n = 50;

    printf("Calculating the %dth Fibonacci number...\n", n);
    long long result = calculateNFibonachi(n);
    printf("F(%d) = %lld\n", n, result);

    // Optional: Print the first 50 Fibonacci numbers
    printf("\nFirst %d Fibonacci numbers:\n", n);
    for (int i = 0; i <= n; i++)
    {
        printf("F(%d) = %lld\n", i, calculateNFibonachi(i));
    }

    return 0;
}