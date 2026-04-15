#include <stdio.h>

int main()
{
    int a[10], num, i, n, beg, end, mid, found = 0;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to be searched: ");
    scanf("%d", &num);

    beg = 0;
    end = n - 1;

    while(beg <= end)
    {
        mid = (beg + end) / 2;

        if(a[mid] == num)
        {
            printf("\n%d is present at position = %d", num, mid + 1);
            found = 1;
            break;
        }
        else if(a[mid] > num)
            end = mid - 1;
        else
            beg = mid + 1;
    }

    if(!found)
        printf("%d does not exist in the array", num);

    return 0;
}
