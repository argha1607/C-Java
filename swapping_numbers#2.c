#include<stdio.h>
int main()
{
    int a, b;
    printf("enter any two numbers to swap: ");
    scanf("%d%d", &a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swapping the final output is %d%d", a,b);
    return 0;
}
