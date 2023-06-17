#include <iostream>
using namespace std;

// Swap function to swap two elements
void Myswap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Partition function to divide the array into two parts
int partition(int arr[], int start, int end)
{
    int pivot = arr[end]; // Choose the last element as the pivot
    int x = start - 1; // Choose x as the index of the smaller element

    // Iterate through the array from start to end-1
    for (int y = start; y <= end - 1; y++) {
        // Check if the current element is smaller than the pivot
        if (arr[y] < pivot) {
            x++; // Increment x
            Myswap(arr[x], arr[y]); // Swap arr[x] and arr[y]
        }
    }

    // Swap the pivot with arr[x+1]
    Myswap(arr[x + 1], arr[end]);
    return (x + 1); // Return the index of the pivot after placing it in the correct position
}

// Quicksort function
void quickSort(int arr[], int start, int end)
{
    if (start < end) {
        int array_partition = partition(arr, start, end); // Partition the array and store the pivot index

        quickSort(arr, start, array_partition - 1); // Sort the elements smaller than the pivot

        quickSort(arr, array_partition + 1, end); // Sort the elements greater than the pivot
    }
}

// Print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 1, 2, 6, 10, 15, 20, 1, 5 };
    int size = sizeof(arr) / sizeof(arr[0]); // Get the length of the array

    quickSort(arr, 0, size - 1); // Sort the array

    cout << "Mang sau khi sap xep: ";
    printArray(arr, size); // Print the sorted array

    return 0;
}
