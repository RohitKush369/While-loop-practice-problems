// print all multiples of 5 from 1 to 100//
#include<stdio.h>
int main()
{
    int a;
    a=1;
    while(a<=100){
        if(a%5==0){
          printf("%d\n",a);
        }
        a++;
        }
    return 0;
}
