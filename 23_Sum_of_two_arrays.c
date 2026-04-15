#include <stdio.h>
int main() 
{
    int n, i ,arr1[n], arr2[n], sumArr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) 
    {scanf("%d", &arr1[i]);}
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) 
    {scanf("%d", &arr2[i]);}
    for(i = 0; i < n; i++) 
    {sumArr[i] = arr1[i] + arr2[i];}
    printf("Sum of corresponding elements (third array):\n");
    for(i = 0; i < n; i++) 
    {printf("%d ", sumArr[i]);}
    return 0;
}
