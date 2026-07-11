#include <stdio.h>

void displayarray(char arr[], int size)
{

    printf("enter the array: ");
    scanf("%s", arr);
    
    printf("the array is: %s", arr);


}


int main() {
    
    char arr[10];

    displayarray(arr, 10);

    return 0;
}