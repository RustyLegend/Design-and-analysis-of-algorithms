#include<stdio.h>

void merge(int arr[] , int left , int right , int mid)
{
    int i = left;
    int j = mid+1;
    int k = 0;
    int size = right-left+1;
    int result[size];

    while(i <= mid && j <= right)
    {
        if(arr[i] < arr[j])
        {
            result[k] = arr[i];
            i++;
        }
        else if (arr[i] >= arr[j])
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

void mergeSort(int arr[], int left , int right)
{
    if(left == right) return;

    int mid = (left+right)/2;
    mergeSort(arr , left , mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,right , mid);
}

int main()
{
    int arr[] = {1,3,4,2};

    mergeSort(arr,0,3);

    for(int i = 0 ; i < 4 ; i++)
    {
        printf("%d " , arr[i]);
    }
}