#include<stdio.h>

void fibonacciGenerator(int i , int j , int n)
{
    if (n == 2) return;
    else 
    {
        printf("%d ", i+j);
        fibonacciGenerator(j,i+j,n-1);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<2) printf("Please enter number greater than equal to 2");
    else 
    {
        printf("%d ",0);
        printf("%d ",1);
        fibonacciGenerator(0,1,n);
    }
}