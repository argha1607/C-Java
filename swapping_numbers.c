#include<stdio.h>
int main()
{
    int a,b,temp=0;
    printf("enter any two numbers to swap: ");
    scanf("%d%d", &a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping the result is %d%d", a,b);
    return 0;
}
