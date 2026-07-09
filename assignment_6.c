#include <stdio.h>

void getmaxchar(char arr[], int size)
{
    char max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

return max;
}
int main(){

char testarr[] = {'o', 'm', 'a', 'r',};
int size = sizeof(testarr) / sizeof(testarr[0]);
char maxchar = getmaxchar(testarr, size);
printf("The maximum character in the array is: %c\n", maxchar);

return 0;
}




