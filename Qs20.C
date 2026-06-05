#include <stdio.h>

int main() {
    long long num, n;
    long long largestPrimeFactor = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    n = num;

    while (n % 2 == 0) {
        largestPrimeFactor = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    if (n > 2)
        largestPrimeFactor = n;

    printf("Largest Prime Factor of %lld is %lld\n", num, largestPrimeFactor);

    return 0;
}