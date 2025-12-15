#include<stdio.h>

int maxElementOfArray(int arr[] , int n)
{
	int max = arr[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	return max;
}

int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &arr[i]);
	}
	
	int maxe = maxElementOfArray(arr,n);
	printf("Maximum number: %d", maxe);
}
