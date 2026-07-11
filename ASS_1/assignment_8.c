#include <stdio.h>

void reversechararray(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printchararray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c\n ", arr[i]);
    }
}
void printintarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n ", arr[i]);
    }
}
int main()
{
    char testarr[] = {'o', 'm', 'a', 'r'};
    int size = sizeof(testarr) / sizeof(testarr[0]);

    printf("Original character array:\n");
    printchararray(testarr, size);

    reversechararray(testarr, size);

    printf("\nReversed character array:\n");
    printchararray(testarr, size);

    int testintarr[] = {6, 3, 8, 1, 9, 2};
    int intsize = sizeof(testintarr) / sizeof(testintarr[0]);

    printf("\nOriginal integer array:\n");
    printintarray(testintarr, intsize);

    reversechararray((char *)testintarr, intsize * sizeof(int));
    
    printf("\nReversed integer array:\n");
    printintarray(testintarr, intsize);

    return 0;
}














