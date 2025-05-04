 
#include <stdio.h> 
 
int main() { 
    int rows, cols, i, j; 
    int matrix1[50][50], matrix2[50][50], diff[50][50]; 
 
    printf("Enter number of rows: "); 
    scanf("%d", &rows); 
    printf("Enter number of columns: "); 
    scanf("%d", &cols); 
 
    if (rows <= 0 || cols <= 0) { 
        printf("Rows and columns must be positive\n"); 
        return 0; 
    } 
 
    printf("Enter elements of first matrix:\n"); 
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("Element [%d][%d]: ", i , j); 
            scanf("%d", &matrix1[i][j]); 
        } 
    } 
 
    printf("Enter elements of second matrix:\n"); 
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("Element [%d][%d]: ", i, j); 
            scanf("%d", &matrix2[i][j]); 
        } 
    } 
 
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            diff[i][j] = matrix1[i][j] - matrix2[i][j]; 
        } 
    } 
 
    printf("Difference of matrices:\n"); 
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("%d ", diff[i][j]); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
}