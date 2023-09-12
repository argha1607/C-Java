#include<stdio.h>
void HW(int n)


    { if(n==0)
{
    return;
}


printf("hello World\n");
HW(n-1);
}



int main()
{
    int n;
    printf("enter any number:");
    scanf("%d", &n);
    HW(n);
    return 0;
}
