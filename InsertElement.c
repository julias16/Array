#include <stdio.h>
int main()
{
    int num[100],i, x, pos, n;
    printf("How many numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Input the element you want to insert: ");
    scanf("%d", &x);

    printf("Position at which element is to be inserted: ");
    scanf("%d", &pos);

    n++; // increase the size by 1

    for (i = n - 1; i >= pos; i--)
    {
        num[i] = num[i - 1];
    }

    num[pos - 1] = x;

    printf("The updated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
