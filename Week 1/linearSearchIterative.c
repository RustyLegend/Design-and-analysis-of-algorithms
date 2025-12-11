#include<stdio.h>

int linearSearch(int arr[], int key, int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == key) return i;
    }

    return -1;
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the key to search: ");
    scanf("%d",&key);

    int index = linearSearch(arr,key,size);

    if(index == -1) printf("Key does not exist in the array");
    else printf("Key is present at index %d (0-indexed) in the array",index);
}