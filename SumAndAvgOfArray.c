#include<stdio.h>
int main()
{
    int num[100], i, n, sum=0;
    printf("How many numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<n; i++)
    {
        sum= sum+ num[i];
    }
    printf("Summation: %d\n", sum);
    float avg= (float)sum/n;
    printf("Average: %.2f\n", avg);
    return 0;
}
