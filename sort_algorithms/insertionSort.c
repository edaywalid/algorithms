#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size);

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n)
{
    // Iterate through each element of the array starting from index 1
    // (index 0 is considered as a sorted subarray with a single element)
    for (int i = 1; i < n; i++)
    {
        // Store the current element to be inserted into the sorted sequence
        int key = arr[i];

        // Move elements greater than the key to one position ahead
        // until an element less than or equal to the key is encountered
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            // Shift the element to the right
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key element at its correct position in the sorted sequence
        arr[j + 1] = key;
    }
}

int main()
{
    // Example array to be sorted
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    printf("Original array: ");
    printArray(arr, n);

    // Perform insertion sort on the array
    insertionSort(arr, n);

    // Display the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

// Function to print the elements of an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
