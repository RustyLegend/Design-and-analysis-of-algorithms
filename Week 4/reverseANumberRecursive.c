#include<stdio.h>

int reverseANumber(int n,int rev)
{
    if (n == 0) return rev;
    return reverseANumber(n/10,(rev*10)+(n%10));
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    int reversedNumber = reverseANumber(n,0);

    printf("Reverse: %d",reversedNumber);
}