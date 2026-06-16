#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxFreq = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int freq = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }

        if(freq > maxFreq) {
            maxFreq = freq;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}