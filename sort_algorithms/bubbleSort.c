#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j;

    // Perform n-1 bubble operations on the array
    for (i = 0; i < n - 1; i++)
    {
        // The last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
        {
            // check if the element found is greater than the next element
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
           
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main (){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    
    return 0;
}