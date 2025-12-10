#include <stdio.h>

int main()
{
    int n, i = 10, reverse = 0, orginal_n;

    printf("Please insert the number: ");
    scanf("%d", &n);
    orginal_n = n;
    if (n < 10)
        printf("reverse %d number is: %d", n, n);
    else
    {
        while (n > 0)
        {
            reverse = reverse * i + (n % 10);

            n = n / 10;
        }
        printf("reverse %d number is: %d", orginal_n, reverse);
    }

       return 0;
}