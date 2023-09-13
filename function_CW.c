#include<stdio.h>
int func1(int i)
{
    int a;
    a=a+1;
    printf("%d\n", a);
    return 0;
}
int func2(int i)
{
    static int a;
    a = a+1;
    printf("%d\n", a);
    return 0;
}
int main()
{
    func1(1);
    func1(1);
    func2(1);
    func2(1);
    return 0;
}
