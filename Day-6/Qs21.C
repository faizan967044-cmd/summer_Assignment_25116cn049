#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary number in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}