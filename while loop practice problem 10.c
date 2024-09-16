//write a program to compute the factorial of a given positive integer n.
#include<stdio.h>
int main()
{
    int n;
    int factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
    factorial=factorial*n;//5!=5*4*3*2*1
    n--;
}
printf("%d",factorial);
return 0;
}
