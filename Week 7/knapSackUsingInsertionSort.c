#include<stdio.h>

void insertionSort(float pwratio[] , int profits[] , int weights[] , int size)
{
    float temp;
    for(int i = 0 ; i < size-1 ; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
            if(pwratio[i] <= pwratio[j])
            {
                temp = pwratio[i];
                pwratio[i] = pwratio[j];
                pwratio[j] = temp;

                temp = profits[i];
                profits[i] = profits[j];
                profits[j] = temp;

                temp = weights[i];
                weights[i] = weights[j];
                weights[j] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter number of items: ");
    scanf("%d",&size);

    int profits[size];
    int weights[size];
    float pwratio[size];

    float amountOfItems[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter profit, weight pairs: ");
        scanf("%d %d",&profits[i],&weights[i]);
    }

    int maxWeight;
    printf("Enter maximum weight: ");
    scanf("%d",&maxWeight);

    for(int i = 0 ; i < size ; i++)
    {
        pwratio[i] = (float)profits[i] / weights[i];
        amountOfItems[i] = 0;
    }

    insertionSort(pwratio,profits,weights,size);

    for(int i = 0 ; i < size ; i++)
    {
        if(weights[i] <= maxWeight)
        {
            amountOfItems[i] = 1;
        }
        else
        {
            float ratio = (float)maxWeight / weights[i];
            amountOfItems[i] = ratio;
        }

        maxWeight -= amountOfItems[i]*weights[i];
    }

    float maxProfit = 0;
    for(int i = 0 ; i < size ; i++)
    {
        maxProfit += profits[i]*amountOfItems[i];
    }

    printf("Maximum Profit: %.2f",maxProfit);
}