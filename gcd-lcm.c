#include <stdio.h>

int calculateGCD(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculatelcm(int a, int b, int gcd)
{
    int result = (a * b) / gcd;
    return result;
}

int main()
{
    int a, b, gcd, lcm;

    printf("Please enter first number: ");
    scanf("%d", &a);

    printf("Please enter second number: ");
    scanf("%d", &b);

    gcd = calculateGCD(a, b);

    lcm = calculatelcm(a, b, gcd);

    printf("\n");
    printf("====================================================\n");
    printf("the GCD of %d and %d is: %d\n", a, b, gcd);
    printf("the Lcm of %d  and %d is: %d", a, b, lcm);
}