#include<stdio.h>
#include<math.h>
int main()
{
int k=0, num, rem;
printf("enter a number: ");
scanf("%d", &num);
int bin = 0;
while (num>0)
{
rem = num%2;
bin = bin +rem*pow(10, k);
num = num/2;
k++;
}
printf(" binary representation is %d", bin);
return 0;
}
