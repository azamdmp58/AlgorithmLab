#include <stdio.h>

int found = 0;

void print_subset(int subset[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
    found = 1;
}

void subset_sum(int set[], int n, int target, int subset[], int size, int sum, int start) {
    if (sum == target) {
        print_subset(subset, size);
        return;
    }
    
    for (int i = start; i < n; i++) {
        if (sum + set[i] <= target) {
            subset[size] = set[i];
            subset_sum(set, n, target, subset, size + 1, sum + set[i], i + 1);
        }
    }
}

int main() {
    int n, target;
    
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    
    int set[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    int subset[100];
    printf("Subsets with sum %d are:\n", target);
    found = 0;
    subset_sum(set, n, target, subset, 0, 0, 0);
    
    if (!found) {
        printf("No subsets found with sum %d\n", target);
    }
    
    return 0;
}