// Second largest number without sorting

#include<stdio.h>
int main()
{
    int num[100], n, i, max, max2;
    printf("How many numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=1; i<num[i]; i++)
    {
        max= num[0];
        max2= num[1];
    }
    for(i=1; i<num[i]; i++)
    {
        if(num[i]>max)
        {
            max2= max;
            max= num[i];
        }
        else if(max2< num[i])
            max2= num[i];
    }
    printf("Max: %d\nSecond max: %d\n", max, max2);
    return 0;
}
