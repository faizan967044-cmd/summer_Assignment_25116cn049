#include <stdio.h>

int main() {
    int arr[100], n, sum, i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found with sum %d\n", sum);
    }

    return 0;
}