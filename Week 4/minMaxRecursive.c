#include<stdio.h>

int min(int arr[], int index, int minElement)
{
    if(index == -1) return minElement;
    else if(arr[index] < minElement) minElement = arr[index];

	return min(arr,index-1,minElement);
}

int max(int arr[], int index, int maxElement)
{
	if(index == -1) return maxElement;
    else if(arr[index] > maxElement) maxElement = arr[index];

	return max(arr,index-1,maxElement);
}

int main()
{
    int size;

	printf("Enter size: ");
	scanf("%d",&size);

	if(size <= 0) 
	{
		printf("Invalid size."); 
		return 0;
	}
	
	int arr[size];

	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d",&arr[i]);
	}

    int minElement = min(arr,size-2,arr[size-1]);
	int maxElement = max(arr,size-2,arr[size-1]);

    printf("Minimum element: %d\n",minElement);
	printf("Maximum element: %d",maxElement);
}