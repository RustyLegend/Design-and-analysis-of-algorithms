#include<stdio.h>

void insertionSort(int arr[] , int size)
{
	
	for(int i = 1; i < size ; i++)
	{
		int pointElement = arr[i];
		int j;
		for( j = i -1 ; j>=0 ; j--)
		{
			if(arr[j] > pointElement)
			{
				arr[j+1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1] = pointElement;
	}
}

void printArray(int arr[] , int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d ", arr[i]);
	}
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
	
	insertionSort(arr,size);
	
	printArray(arr,size);
}
