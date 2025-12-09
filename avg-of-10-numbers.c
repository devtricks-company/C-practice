#include <stdio.h>

int main()
{

    int n, sum = 0, count = 0;

    do
    {
        printf("Please enter the %d number: ", count + 1);
        scanf("%d", &n);
        sum += n;
        count++;
    } while (count < 10);

    printf("==========================================================\n");
    printf("the avg is: %f\n", (float)sum / count);
    printf("==========================================================\n");
}