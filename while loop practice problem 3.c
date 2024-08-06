//sum of first 100 natural numbers//
#include<stdio.h>
int main()
{
    int a,sum;
    a=1;
    sum=0;
    while(a<=100)
    {
    sum=sum+a;
    a=a+1;
    }
     printf("sum of first 100 natural numbers is : %d",sum);
    return 0;
}
