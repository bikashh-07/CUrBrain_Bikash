#include <stdio.h>
#include <stdlib.h>

int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    return product - sum;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", subtractProductAndSum(n));
    }
    return 0;
}
