#include <stdio.h>
#include <stdlib.h>

int digitFreqDiff(int n, int a, int b) {
    int count_a = 0;
    int count_b = 0;

    if (n == 0) {
        if (a == 0) {
            count_a++;
        }
        if (b == 0) {
            count_b++;
        }
    } else {
        while (n > 0) {
            int digit = n % 10;
            if (digit == a) {
                count_a++;
            }
            if (digit == b) {
                count_b++;
            }
            n /= 10;
        }
    }

    return abs(count_a - count_b);
}

int main() {
    int n, a, b;
    if (scanf("%d %d %d", &n, &a, &b) == 3) {
        printf("%d\n", digitFreqDiff(n, a, b));
    }
    return 0;
}
