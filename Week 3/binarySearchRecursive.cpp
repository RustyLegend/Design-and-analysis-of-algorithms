#include<stdio.h>

int binarySearch(int arr[] , int left , int right , int key)
{
	if(left > right) return -1;

	int mid = (left + right)/2;
	if(arr[mid] == key) return mid;

	if(key > arr[mid]) return binarySearch(arr,mid+1,right,key);
	return binarySearch(arr,left,mid-1,key);
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
	
	int index = binarySearch(arr,0,size-1,key);
	
	if(index == -1) printf("Key not found");
	else printf("Index (0-indexed): %d",index);
}
