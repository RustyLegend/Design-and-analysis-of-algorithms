#include<stdio.h>
int product(int m , int n)
{
    if(n==0) return 0;

    if(n<0) return -product(m,-n);
    else if(m<0) return -product(-m,n);

    return product(m,n-1) + m;
}

int main()
{
    int m , n;

    printf("Enter m, n: ");
    scanf("%d %d",&m,&n);

    int result = product(m,n);

    printf("Product: %d",result);
}