#include <stdio.h>

void findMinMax(int arr[], int low, int high, int result[]) {
    int mid;
    int leftResult[2];  
    int rightResult[2]; 

    if (low == high) {
        result[0] = arr[low]; 
        result[1] = arr[low]; 
        return;
    }

    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result[0] = arr[low];
            result[1] = arr[high];
        } else {
            result[0] = arr[high];
            result[1] = arr[low];
        }
        return;
    }


    mid = (low + high) / 2;

    findMinMax(arr, low, mid, leftResult);
    findMinMax(arr, mid + 1, high, rightResult);

    if (leftResult[0] < rightResult[0])
        result[0] = leftResult[0];
    else
        result[0] = rightResult[0];


    if (leftResult[1] > rightResult[1])
        result[1] = leftResult[1];
    else
        result[1] = rightResult[1];
}

int main() {
    int arr[] = {7, 2, 9, 1, 5, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int finalResult[2]; 

    findMinMax(arr, 0, n - 1, finalResult);

    printf("Minimum element: %d\n", finalResult[0]);
    printf("Maximum element: %d\n", finalResult[1]);

    return 0;
}