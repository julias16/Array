#include <stdio.h>
int main()
{
    int arr[100], i, j, n, count=0;
    printf("How many numbers: ");
    scanf("%d", &n);
    for (i= 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i< n; i++)
    {
        for(j= i+1; j< n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements: %d\n", count);
    return 0;
}
