#include<stdio.h>
int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return n* factorial(n-1);
    }
}
int main ()
{
    int n;
    printf ("enter any number to calculate factorial: ");
    scanf("%d", &n);
    printf("factorial of the given number is %d", factorial(n));
    return 0;
}
