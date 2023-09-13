#include <stdio.h>
int sum=0,rem;
int rev_func(int num){
  if(num !=0){
    rem=num%10;
    sum=sum*10+rem;
    rev_func(num/10);
  }
  else
    return sum;

}
int main(){
  int num,rev;
  printf("Enter any number:");
  scanf("%d",&num);
  printf("The reverse of entered number is :%d",  rev_func(num));
  return 0;
}
