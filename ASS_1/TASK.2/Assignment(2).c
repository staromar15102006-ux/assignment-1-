#include <stdio.h>
#include "stdint.h"
#define SIZE 6

void bubbleSort(int arr[], uint8_t size)
{
    register uint8_t i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main()
{

int array[]={5, 2, 9, 1, 4, 6};
int size = SIZE;
register uint8_t i;
bubbleSort(array, size);

printf("Sorted array: ");
for (uint8_t i = 0; i < size; i++)
{
    printf("%d ", array[i]);
}
printf("\n");

    return 0;
}
 