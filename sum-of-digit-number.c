#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Please insert n: ");
    scanf("%d", &n);

    if (n < 10)
        printf("sum is: %d", sum);
    else
    {
        while (n > 0)
        {
            sum += n % 10;
            n = n / 10;
        }
    }

    printf("sum is: %d", sum);

    return 0;
}