#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter two numbers to swap:");
    scanf("%f%f", &a,&b);
    c = a*b;
    a = c/a;
    b = c/b;
    printf("the final result is %0.0f%0.0f", a,b);
    return 0;
}
