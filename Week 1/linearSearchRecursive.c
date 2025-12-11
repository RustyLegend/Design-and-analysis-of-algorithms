#include<stdio.h>

int linearSearch(int arr[], int key, int index, int size)
{
    if(index >= size) return -1;
    else if(arr[index] == key) return index;
    else return linearSearch(arr,key,index+1,size);
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

    int index = linearSearch(arr,key,0,size);

    if(index == -1) printf("Key does not exist in the array");
    else printf("Key is present at index %d (0-indexed) in the array",index);
}