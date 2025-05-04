#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive\n");
        return 0;
    }

    printf("Enter %d element: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }
    printf("Element not found\n");

    return 0;
}