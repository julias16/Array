#include<stdio.h>
int main()
{
    int n, sum=0, rem, temp, fact, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp= n;
    while(temp!=0)
    {
        rem= temp%10;
        fact= 1;
        for(i=1; i<=rem; i++)
        {
            fact= fact*i;
        }
        sum= sum+fact;
        temp= temp/10;
    }
    if(sum==n)
        printf("Strong");
    else
        printf("Not strong");
    return 0;
}
