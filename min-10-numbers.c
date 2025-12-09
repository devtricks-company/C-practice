#include <stdio.h>

int main()
{
    int n, min, i = 1;

    printf("Please enter the %d number: ", i);
    scanf("%d", &n);

    min = n;
    while (i <= 9)
    {
        printf("Please enter the %d number: ", i + 1);
        scanf("%d", &n);
        if (n < min)
            min = n;
        i++;
    }

    printf("===============================================\n");
    printf("the minimum number is: %d", min);
}