#include<stdio.h>
int main()
{
    int num[100], i, n, count=0;
    printf("Number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<n; i++)
    {
        if(num[i]%2!=0)
            count++;
    }
    printf("Number of odd numbers: %d", count);
    return 0;
}

