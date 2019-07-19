#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        int j = i - 1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}

int main() 
{
    int array[] = {5,14,3,12,10};
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    InsertionSort(array, size);
    return (0);
}