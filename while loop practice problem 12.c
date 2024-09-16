// write a program to calculate the sum of all even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        sum=sum+n;
        n-=2;
    }
    printf("sum is:%d",sum);
    return 0;
}
