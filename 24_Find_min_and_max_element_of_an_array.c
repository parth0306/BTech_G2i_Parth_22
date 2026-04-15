#include <stdio.h>
int main() 
{
    int n, i,arr[10],min = arr[10],max = '\0';
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {scanf("%d", &arr[i]);}
    for(i = 0; i < n; i++) 
    {   if(arr[i] < min) 
        {min = arr[i];}
        if(arr[i] > max) 
        {max = arr[i];}}
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
    return 0;
}
