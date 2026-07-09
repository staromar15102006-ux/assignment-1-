#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size)
{
    int i, j, minIndex, temp;
    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main() {
    int arr[] = {28, 13,66, 85, 98, 11, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array by bubble sort: ");
    printArray(arr, size);

    bubbleSort(arr, size);
    printf("Array after bubble sort: ");
    printArray(arr, size); 

    int arr2[] = {55, 27, 8, 86, 43, 39, 12};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Original array by selection sort: ");
    printArray(arr2, size2);

    selectionSort(arr2, size2);
    
    printf("Array after selection sort: ");
    printArray(arr2, size2);

    return 0;
}


















    return 0;
}