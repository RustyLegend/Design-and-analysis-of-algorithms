#include<stdio.h>

struct item
{
    int profit;
    int weight;
    float pwratio;
};

void merge(struct item arr[] , int left , int right , int mid)
{
    int i = left;
    int j = mid+1;
    int k = 0;
    int size = right-left+1;
    struct item result[size];

    while(i <= mid && j <= right)
    {
        if(arr[i].pwratio >= arr[j].pwratio)
        {
            result[k] = arr[i];
            i++;
        }
        else
        {
            result[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        result[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
    {
        result[k] = arr[j];
        j++;
        k++;
    }

    for(int i = 0 ; i < size ; i++)
    {
        arr[left + i] = result[i];
    }
}

void mergeSortDescending(struct item arr[], int left , int right)
{
    if(left == right) return;

    int mid = (left+right)/2;
    mergeSortDescending(arr , left , mid);
    mergeSortDescending(arr,mid+1,right);
    merge(arr,left,right , mid);
}

int main()
{
    int size;
    printf("Enter number of items: ");
    scanf("%d",&size);
    struct item items[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter profit, weight pairs: ");
        scanf("%d %d",&items[i].profit,&items[i].weight);
    }

    float ratioOfItems[size];
    for(int i = 0 ; i < size ; i++)
    {
        items[i].pwratio = (float)items[i].profit/items[i].weight;
        ratioOfItems[i] = 0;
    }

    int maxWeight;
    printf("Enter the maximum weight of knapsack: ");
    scanf("%d",&maxWeight);

    mergeSortDescending(items,0,size-1);


    for(int i = 0 ; i < size ; i++)
    {
        if(maxWeight == 0) break;

        if (items[i].weight <= maxWeight )
        {
            ratioOfItems[i] = 1;
        }
        else
        {
            float ratio = (float)maxWeight/items[i].weight;
            ratioOfItems[i] = ratio;
        }

        maxWeight -= ratioOfItems[i]*items[i].weight;
    }

    float maxProfit = 0;
    for(int i = 0 ; i < size ; i++)
    {
        maxProfit += ratioOfItems[i]*(float)items[i].profit;
    }

    printf("Max profit: %.3f",maxProfit);
}