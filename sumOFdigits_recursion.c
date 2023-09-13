#include<stdio.h>
int sum (int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n%10 + sum(n/10);
    }
}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("the sum of the digits is %d", sum(num));
    return 0;
}
