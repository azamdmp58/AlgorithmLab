#include <stdio.h> 
 
int main() { 
    int n, i, j, temp; 
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
 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
 
    printf("Sorter array: "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
 
    return 0; 
} 