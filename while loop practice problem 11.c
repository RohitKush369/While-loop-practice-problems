//write a program to find the largest digit in a given integer.
#include<stdio.h>
int main()
{
    int num;
    int remainder=0,max_digit;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0){
     remainder=num%10;
     num/=10;
     if(remainder>max_digit){
        max_digit=remainder;
     }
    }
printf("Largest digit is:%d",max_digit);
}
