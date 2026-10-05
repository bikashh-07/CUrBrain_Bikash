#include <stdio.h>
#include <stdlib.h>
long long reverseNumber(long long n) {
    long long rev = 0;
    long long temp = n;
    
    if (temp < 0) {
        temp = -temp;
    }
    
    while (temp > 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    
    if (n < 0) {
        rev = -rev;
    }
    
    return rev;
}

long long solve(long long n) {
    if (n < 0) {
        long long rev = reverseNumber(n);
        return n + rev;
    }
    
    long long rev = reverseNumber(n);
    
    if (n == rev) {
        return n;
    } else {
        return n + rev;
    }
}

int main() {
    long long n;
    
    if (scanf("%lld", &n) == 1) {
        printf("%lld\n", solve(n));
    }
    
    return 0;
}
