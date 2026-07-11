#include <stdio.h>

int countnum(int arr[], int size, int num)
{
    int i;
    int count = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int nummbers[] = {2,8,5,2,7,2,9,1,2};
    int size = 9;
    int num = 2;    
for (int i = 0; i < size; i++)
    {
        printf("%d\n ", nummbers[i]);
    }

int count = countnum(nummbers, size, num);
    printf("The number %d is repeated %d times.\n", num, count);
    return 0;
}