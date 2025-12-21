#include<stdio.h>

int isUniqueArray(int arr[] , int size)
{
    for(int i = 0 ; i < size-1; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
            if(arr[i] == arr[j]) return 0;
        }
    }

    return 1;
}

void readArray(int arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    readArray(arr,size);

    if(isUniqueArray(arr,size)) printf("Array is unique.");
    else printf("Array is not unique.");
}