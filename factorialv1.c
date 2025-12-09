#include <stdio.h>

int caculateFactorial(int n)
{
    int i;
    int result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int n, result;
    printf("Please enter the number: ");
    scanf("%d", &n);

    result = caculateFactorial(n);

    printf("Factorial of the %d number is: %d", n, result);
    return 0;
}