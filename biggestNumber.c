#include <stdio.h>

int main() {
    
    int n, i;
    int arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be positive\n");
        return 0;
    }
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest number is %d\n", largest);
    
    return 0;
}