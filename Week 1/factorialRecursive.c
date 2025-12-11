#include<stdio.h>

int factorialOf(int n)
{
    if(n==1) return 1;
    else return n*factorialOf(n-1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0) printf("Fcatorial is not possible");
    else printf("Factorial of %d is %d", n , factorialOf(n));
}