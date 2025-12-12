#include<stdio.h>

void selectionSort(int a[] , int n)
{
	int min,t;
	for(int i = 0 ; i < n-1 ; i++)
	{
		min = i;
		for(int j = i+1 ; j < n ; j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		
		t = a[i];
		a[i] = a[min];
		a[min] = t;
	}
}

void printArray(int arr[] , int n)
{
	for(int i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
}

int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++)
		scanf("%d",&arr[i]);
	
	selectionSort(arr,n);
	printArray(arr,n);
}
