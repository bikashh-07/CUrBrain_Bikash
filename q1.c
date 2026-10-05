#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        if (n < 0)
            n = -n;

        while (n > 0)
        {
            count++;
            n = n / 10;
        }
    }

    if (count % 2 == 0)
        printf("True");
    else
        printf("False");

    return 0;
}
