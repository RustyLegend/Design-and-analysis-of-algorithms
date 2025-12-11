#include<stdio.h>

int factorialOf(int n)
{
    int fact = 1;
    while(n > 0)
    {
        fact = fact * n;
        n--;
    }

    return fact;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n < 0) printf("Fctorial of the number is not possible.");
    else printf("Factorial of %d is %d", n , factorialOf(n));
}