#include <stdio.h>

int getwithoutsort(int arr[], int size)
{
    int i;
    int max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

//another way

int getwithsort(int arr[], int size)
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
    return arr[size - 1];
}
int main() {
 int NUM[]={13,31,46,77,81,102,44,56,68};   
 int size =sizeof(NUM)/sizeof(NUM[0]);

 int max1 = getwithoutsort(NUM, size);
 int max2 = getwithsort(NUM, size);

 printf("Maximum without sorting: %d\n", max1);
 printf("Maximum with sorting: %d\n", max2);
    return 0;
}