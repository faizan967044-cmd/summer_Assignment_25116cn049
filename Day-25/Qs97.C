#include <stdio.h>

int main() {
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int b[n2], c[n1 + n2];

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    i = j = k = 0;

    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while(i < n1) {
        c[k++] = a[i++];
    }

    while(j < n2) {
        c[k++] = b[j++];
    }

    printf("Merged Sorted Array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}