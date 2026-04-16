#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[100][100], b[100][100], sum[100][100], prod[100][100];

    printf("Enter rows and cols for 1st matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols for 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if Multiplication is Possible
    if (c1 != r2)  
    {
        printf("Multiplication not possible!\n");
        return 0; 
    }

    // Input elements 
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++) 
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++) 
            scanf("%d", &b[i][j]);

    // Matrix Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) 
        {
            prod[i][j] = 0;
            for (k = 0; k < c1; k++) 
                prod[i][j] += a[i][k] * b[k][j];
        }
    }

    // Output Results
    printf("\nProduct Matrix:\n");
    for (i = 0; i < r1;i++) {
        for (j = 0; j < c2; j++) 
        printf("%d  ", prod[i][j]);
        printf("\n");
    }

    
    // Matrix Addition (If valid)
    
    if (r1==r2 && c2==c2) 
    {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
            sum[i][j] = a[i][j] + b[i][j];
    
        printf("\nSum Matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++)
            printf("%d  ", sum[i][j]);
            printf("\n");
        }
    } else printf("\nAddition not possible: Different dimensions.\n");

    return 0;
}
