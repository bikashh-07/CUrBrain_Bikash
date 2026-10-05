#include <stdio.h>
#include <stdlib.h>
int reverse_and_double(int n)
{
    int rev = 0;
    int digit;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    rev = rev * sign;

    return rev * 2;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", reverse_and_double(n));

    return 0;
}
