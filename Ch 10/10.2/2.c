#include <stdio.h>

int len(char s[])
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char string[100];

    printf("Enter any string : ");
    scanf("%[^\n]", string);

    int length = len(string);

    printf("Length is : %d\n", length);

    return 0;
}
