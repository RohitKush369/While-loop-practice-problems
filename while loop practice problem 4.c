//find sum of digit of a given number//
#include<stdio.h>
int main()
{
    int a,sum=0,digit;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a>0)
    {
      digit=a%10;
      sum=sum+digit;
      a/=10;
    }
    printf("%d",sum);
    return 0;
}
