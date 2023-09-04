#include<stdio.h>
int main()
{
    int i, sum=0, n, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    for( ; n>0; n=n/10)
    {
        rem= n%10;
        sum= sum+ rem;
    }
    printf("Summation of digits: %d\n", sum);
    return 0;
}
