#include <stdio.h>

    int i;
void charArrayToIntArray(char ch[], int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        arr[i] = ch[i] - '0';
    }
}


int main()
{
    char ch[] = {'o', 'm', 'a', 'r', '2', '0'};
    int arr[6];

    charArrayToIntArray(ch, arr, 6);

    printf("Integer array: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    
    return 0;
}
