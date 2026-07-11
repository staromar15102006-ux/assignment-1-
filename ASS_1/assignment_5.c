#include <stdio.h>

int countChar(char arr[], char ch)
{
    int i; 
    int count = 0;

    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char arr[100];
    char ch;

    printf("Enter a word: ");
    scanf("%s", arr);

    printf("Enter the character: ");
    scanf(" %c", &ch);

    printf("The character '%c' is repeated %d times.",
           ch, countChar(arr, ch));

    return 0;
}