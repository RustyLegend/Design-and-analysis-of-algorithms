#include<stdio.h>

int GCD(int m , int n)
{
    int t;
    while (n!=0)
    {
        t = m%n;
        m = n;
        n = t;
    }
    return m;
}

int main()
{
    int m,n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    
    if((m == 0 && n == 0) || m < 0 || n < 0) printf("GCD is not possible");
    else printf("GCD of %d and %d is %d", m, n, GCD(m,n));
}