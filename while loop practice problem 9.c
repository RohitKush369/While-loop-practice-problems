#include<stdio.h>
int main()
{
    int a,product;
    a=1;
    product=1;
    while(a<=5){
        a++;
        product*=a;
        printf("%d",a,product);
    }
    return 0;
}
