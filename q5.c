#include <stdio.h>
#include <stdlib.h>
void replaceEvenDigits(int n) {
    int digits[20];
    int count = 0;

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) {
            digits[count] = 0;
        } else {
            digits[count] = d;
        }
        count++;
        n /= 10;
    }

    printf("[");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", digits[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        replaceEvenDigits(n);
    }
    return 0;
}
