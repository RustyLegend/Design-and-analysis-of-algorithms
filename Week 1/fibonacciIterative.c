#include<stdio.h>

void fibonacciGenerator(int n)
{
    int i = 0;
    int j = 1;
    printf("%d ",i);
    printf("%d ",j);
    for(int k = 1 ; k < n-1 ; k++)
    {
        int t = i + j;
        printf("%d ",t);
        i = j;
        j = t;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n < 2) printf("Entered number must be greater than or equal to 2");
    else fibonacciGenerator(n);
}