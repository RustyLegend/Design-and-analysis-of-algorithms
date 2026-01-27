#include<stdio.h>

int main()
{
    int size;
    printf("Enter the number of coin types available: ");
    scanf("%d",&size);

    printf("!ENTER COIN TYPES IN DESCENDING ORDER!\n");
    int coinTypes[size];
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter coin type %d: ",i+1);
        scanf("%d",&coinTypes[i]);
    }

    int maxAmount;
    printf("Enter the maximum amount: ");
    scanf("%d",&maxAmount);

    int coinCount = 0;
    for(int i = 0 ; i < size ; i++)
    {
        int times = maxAmount / coinTypes[i];
        coinCount += times;
        maxAmount = maxAmount % coinTypes[i];
    }

    printf("Number of coins needed: %d",coinCount);
}