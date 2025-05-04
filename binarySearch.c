#include <stdio.h> 
 
int main() { 
    int n, i, key, low, high, mid; 
    int arr[100]; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    if (n <= 0) { 
        printf("Array size must be positive\n"); 
        return 0; 
    } 
 
    printf("Enter %d sorted elements: ", n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
 
    low = 0; 
    high = n - 1; 
    while (low <= high) { 
        mid = (low + high) / 2; 
        if (arr[mid] == key) { 
            printf("Element found at position %d\n", mid + 1); 
            return 0; 
        } else if (arr[mid] < key) { 
            low = mid + 1; 
        } else { 
            high = mid - 1; 
        } 
    } 
    printf("Element not found\n"); 
 
    return 0; 
}