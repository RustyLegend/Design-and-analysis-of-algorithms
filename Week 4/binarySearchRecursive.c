#include<stdio.h>

int binarySearch(int arr[], int key, int size)
{
    int mid , left = 0 , right = size-1;

    while (left <= right)
    {
        mid = (left + right)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) left = mid+1;
        else right = mid-1;
    }

    return -1;
}

int main()
{
    int size;
	
	printf("Enter size: ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int key;
	
	printf("Enter key: ");
	scanf("%d",&key);
	
	int index = binarySearch(arr,key,size);
	
	if(index == -1) printf("Key not found");
	else printf("Index (0-indexed): %d",index);
}