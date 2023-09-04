#include<stdio.h>
int main()
{
    int n, i, r, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        r= n%i;
        if(r==0)
        {
            sum= sum+i;
        }
    }
    if(n==sum)
        printf("Perfect");
    else
        printf("Not perfect");
    return 0;
}
