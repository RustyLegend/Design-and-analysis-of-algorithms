#include<stdio.h>

void printMinMax(int arr[] , int size)
{
	int min = arr[0];
	int max = arr[0];
	
	for(int i = 0 ; i < size ; i++)
	{
		if(arr[i] < min) min = arr[i];
		else if(arr[i] > max) max = arr[i];
	}
	
	printf("Max Element: %d ",max);
	printf("Min Element: %d", min);
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
	
	printMinMax(arr,size);
}
